#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void close_file_descriptor(int fd);

/**
* allocate_memory - this is the function that allocates memory for
* buffer and returns a pointer to it.
*@dest_file: this is the destination file where data will be written.
* Return: this returns the pointer to the newly-allocated buffer.
*/


char *allocate_memory(const char *dest_file)
{
	char *data_buffer;

	data_buffer = malloc(sizeof(char) * 1024);

	if (!data_buffer)
	{
	dprintf(STDERR_FILENO, "Error: can not allocate memory for %s\n", dest_file);
	exit(EXIT_FAILURE);
	}
	return (data_buffer);
}

/**
 * close_file_descriptor - this is the function that closes a file
 * descriptor and checks for errors.
 *@fd: this is the file descriptor to be closed.
 * Return: this returns no value
 */

void close_file_descriptor(int fd)
{
	int close_status;

	close_status = close(fd);

	if (close_status == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not close file descriptor %d\n", fd);
		exit(EXIT_FAILURE);
	}
}

/**
* main - this is the function that copies the content of the
* source file to the destination file
*@argv: this is array of the arguments command-line
*@argc: this is the number of the arguments command-line
*Return: this returns zero when success or appropriate error
* codes on failure
*/

int main(int argc, char *argv[])
{
	int source_fd, dest_fd, bytes_read;
	char *data_buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp source_file dest_file\n");
		exit(EXIT_FAILURE);
	}

	data_buffer = allocate_memory(argv[2]);
	source_fd = open(argv[1], O_RDONLY);
	bytes_read = read(source_fd, data_buffer, 1024);
	dest_fd = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source_fd == -1 || bytes_read == -1)
		{
			dprintf(STDERR_FILENO, "Error: can not read from file %s\n", argv[1]);
			free(data_buffer);
			exit(EXIT_FAILURE);
		}
		bytes_read = read(source_fd, data_buffer, 1024);
		dest_fd = open(argv[2], O_WRONLY | O_APPEND);
	} while (bytes_read > 0);
	free(data_buffer);
	close_file_descriptor(source_fd);
	close_file_descriptor(dest_fd);
	return (EXIT_SUCCESS);
}
