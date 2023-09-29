#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - this is the function that converts the binary
 * to the unsigned int
 *@b: this is the pointer to the string of the binary(0 and 1)
 *Return: this returns the converted unsigned int
 */


unsigned int binary_to_uint(const char *b)
{

	unsigned int result = 0;

	if (b == NULL)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
