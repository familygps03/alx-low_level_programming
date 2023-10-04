#include "main.h"
#include<stdio.h>
#include <fcntl.h>

/**
 * read_textfile - this is the function that reads a textfile and
 * prints it to the standard output
 *@filename: this is the pointer to the file name of the textfile
 *@letters: this is the number of letters to read and print to the
 *standrd output
 *Return: this returns the actual numbers of the letters read and
 *printed, or zero if unsuccessful
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	ssize_t bytes_read, bytes_written;
	char *data_buffer;
	int file_desc;

	if (!filename)
		return (0);

	file_desc = open(filename, O_RDONLY);
	if (file_desc == -1)
		return (0);
	data_buffer = malloc(sizeof(char) * letters);

	if (!data_buffer)
	{
	close(file_desc);
	return (0);
	}
	bytes_read = read(file_desc, data_buffer, letters);

	if (bytes_read == -1)
	{
		close(file_desc);
		free(data_buffer);
		return (0);
	}
	bytes_written = write(STDOUT_FILENO, data_buffer, bytes_read);
	close(file_desc);
	free(data_buffer);

	if (bytes_written != bytes_read)
		return (0);
	return (bytes_written);
}
