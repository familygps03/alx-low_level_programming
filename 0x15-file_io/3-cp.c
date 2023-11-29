#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * create_buffer - Allocates a buffer for reading file data.
 * @file: Name of the file for error messages.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file);
char *create_buffer(char *file)
{
	char *buffer = malloc(sizeof(char) * 1024);

	if (!buffer)
	{
	dprintf(STDERR_FILENO, "Error, Can't allocate memory for %s\n", file);
	exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes a file descriptor and checks for errors.
 * @fd: File descriptor to be closed.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close file descriptor %d\n", fd);
		exit(100);
	}
}

/**
 * main - this is function that copies the content of the file to
 *another file.
 * usage - this the function that dispalys instructions and
 *exits with a specified code. This function prints a usage message
 *to the standard error exits the program with the specified exit code
 * usage - this is function that is responsible for providing instructions
 * on how to use the program and then terminating the program a specified
 * exit code.it prints standardized usage message to the standard error stream
 * guiding users on the correct command-line format for program.
 *@exit_code: the exit code to be used when exiting the program
 *
 *
 * if the argument is not correct -exit code is 97.
 * if the file_from does not exist or cannot be read -exit code is 98.
 * if the file_to cannot be created or written_to -exit code is 99.
 * if the file_to or file_from can not be closed -exit code is 100.
 * Return: this returns 0 when success
 */
void usage(int exit_code)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(exit_code);
}

int main(int argc, char *argv[])
{
	int file_from, file_to, bytes_read, bytes_written;
	char *buffer;

	if (argc != 3)
		usage(97);
	buffer = create_buffer(argv[2]);
	file_from = open(argv[1], O_RDONLY);

	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		free(buffer);
		exit(98);
	}

	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		free(buffer);
		close_file(file_from);
		exit(99);
	}
	do {
		bytes_read = read(file_from, buffer, 1024);

		if (bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			close_file(file_from);
			close_file(file_to);
			exit(98);
		}

		bytes_written = write(file_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buffer);
			close_file(file_from);
			close_file(file_to);
			exit(99);
		}
		} while (bytes_read > 0);
		free(buffer);
		close_file(file_from);
		close_file(file_to);

		return (0);
}
