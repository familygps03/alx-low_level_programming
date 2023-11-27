#include "main.h"

/**
 * _strlen - this is the function that returns the length of the string
 *@str: this is the pointer to the null-terminated byte of the string to be
 * tested.
 * Return: this returns the length of the null-terminated byte of the
 * string str.
 */

int _strlen(const char *str)
{

	int length = 0;

	while (str[length] != '\0')
		length++;
	return (length);
}

/**
 * append_text_to_file - this is the function thata appends the
 * text to the end of the file
 *@filename: this is the pointer to the name of the file
 *@text_content: this is the pointer to the null-terminated string
 * to write to the file
 * Return: this returns 1 when successful, and returns -1 when unsuccessful
 */

int append_text_to_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		bytes_written = write(fd, text_content, _strlen(text_content));

		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);

	return (1);
}
