#include "main.h"
#include <stdio.h>

/**
 * get_bit - this is the function that returns the value of the bit
 * at a given index
 *@index: this is the show the index of the bit
 *@n: this is the an integer number
 *Return: this returns bid value or -1 if the error happened
 */

int get_bit(unsigned long int n, unsigned int index)
{

	int value_bit;

	if (index > 63)
		return (-1);

	value_bit = (n >> index) & 1;

	return (value_bit);
}
