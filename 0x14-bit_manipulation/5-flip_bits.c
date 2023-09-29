#include "main.h"
#include <stdio.h>

/**
 * flip_bits - this function calculates the number of bits needed
 * to be flipped from one number to another
 *@n: this is the first unsigned long integer
 *@m: this is the second unsigned long integer
 *Return: this returns the number of bits that to be flopped/
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int bit_diff_count = 0;
	unsigned long int xor_result = n ^ m;

	while (xor_result)
	{
	xor_result &= (xor_result - 1);
	bit_diff_count++;

	}
	return (bit_diff_count);
}
