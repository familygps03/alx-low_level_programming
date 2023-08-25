#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int num = 0, dest_length = 0;

	while (dest[num++])
		dest_length++;

	for (num = 0; src[num]; num++)
		dest[dest_length++] = src[num];

	return (dest);
}
