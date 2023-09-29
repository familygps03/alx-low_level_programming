#include "main.h"
#include <stdio.h>

/**
 * set_bit - this is the function that sets the value
 * of the bit to 1 at given index
 *@index: this is the an index of the bit
 *@n: this is the pointer to the integer
 *Return: this returns 1 if it is successful
 * or -1 if the is not successful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index > 63)
	{
		return (-1);
	}
	mask <<= index;
	*n |= mask;
	return (1);
}
