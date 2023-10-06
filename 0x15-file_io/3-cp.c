#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void close_file_descriptor(int fd);

/**
* allocate_buffer - this is the function that allocates memory for
* buffer and returns a pointer to it.
*@file_name: this is the name the file that is processed.
*@buffer_size: this is the size of the buffer
* Return: this returns the pointer to the newly-allocated buffer.
*/


char *allocate_buffer(const char *file_name, size_t buffer_size)
{
	int file_desc;
	char *buffer;

	file_desc = open(file_name, O_RDONLY);

	if (file_desc == -1)
	{
	dprintf(STDERR_FILENO, "Error: can not open from file to %s\n", file_name);
	exit(EXIT_FAILURE);
	}
	buffer = malloc(buffer_size);

	if (buffer == NULL)
	{

		dprintf(STDERR_FILENO, "Error: can not malloc\n");
		close_file_descriptor(file_desc);
		exit(EXIT_FAILURE);
	}
	
	return buffer;
}

/**
 * close_file_descriptor - this is the function that closes a file
 * descriptor and checks for errors.
 *@fd: this is the file descriptor to be closed.
 *@file_name: this is the name of the file being processed
 */

void close_file_descriptor(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: can not close fd %d\n", fd);
		exit(EXIT_FAILURE);
	}
}

/**
* main - this is the function that copies the content of the
* file to the another file
*@argv: this is array of the arguments command-line
*@argc: this is the number of the arguments command-line
*Return: this returns zero when success
*/

int main(int argc, char *argv[])
{

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s filename\n", argv[0]);
		exit(EXIT_FAILURE);
	}

	allocate_buffer(argv[1], 1024);

	close_file_descriptor(0);

	return EXIT_SUCCESS;
}
