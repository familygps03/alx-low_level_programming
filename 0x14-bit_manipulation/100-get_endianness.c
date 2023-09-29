#include "main.h"
#include <stdio.h>

/**
 *get_endianness - this is the function that determines the endiannes
 * of the system.
 * Return: this returns zero if it is big endian and returns 1 if it is
 * little endian
 */

int get_endianness(void)
{

	unsigned int num = 1;
	char *byte_ptr = (char *)&num;

	if (*byte_ptr)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
