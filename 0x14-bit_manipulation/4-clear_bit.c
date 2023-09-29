#include "main.h"
#include <stdio.h>

/**
 * clear_bit - this is the function that calculate the number
 * of bits needed for flip between two numbers
 *@index: this is the index set
 *@n: this is the  unsigned long integer
 *Return: this returns the number of bits need to be clear_bit
 *to get from n
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask = 1;
	mask <<= index;
	*n &= ~mask;
	return (1);
}
