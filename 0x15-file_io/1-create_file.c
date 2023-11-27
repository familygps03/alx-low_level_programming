#include "main.h"
#include <unistd.h>
#include <stdlib.h>

/**
 * _strlen - this is the function that returns the length of
 * the string
 *@s: this is the pointer to the null-terminated byte of the
 * string to be tested.
 * Return: this is the length of the null-terminanted byte of
 * the string s.
 */

int _strlen(const char *s)
{

	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * create_file - this is  function creates or truncates a file
 * and write the text content to the file
 *@filename: this is the pointer to the name of the file
 *  to create or truncate the content of the file
 *@text_content: this is the pointer to the null-terminated string
 * to write to the file
 * Return: this returns 1 when success, -1 when unsuccessful
 */

int create_file(const char *filename, char *text_content)
{

	int fd;
	ssize_t bytes_written;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	bytes_written = write(fd, text_content, _strlen(text_content));

	close(fd);

	if (bytes_written == -1)
		return (-1);
	return (1);
}
