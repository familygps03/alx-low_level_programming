#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * custom_strlen - this is the function that returns the length of the string
 *@s: this is the pointer to the null-termninated byte
 *Return: this returns length of the null-terminated byte
 */

unsigned int custom_strlen(const char *s)
{

        unsigned int length = 0;

        while (s[length] != '\0')
        {
        length++;
        }
        return (length);
}
/**
 * binary_to_uint - this is the function that converts the binary
 * to the unsigned int
 *@b: this is the pointer to the string of the binary(0 and 1)
 *Return: this returns the converted unsigned int
 */


unsigned int binary_to_uint(const char *b)
{

	unsigned int index = 0;
	unsigned int result = 1;
	int a;


	if (!b)
		return (0);
	for (a = strlen(b) - 1; a >= 0; a--)
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
		if (b[a] == '1')
		{
			index += result;
		}
		result *= 2;
	}
	return (index);
}
