#include "main.h"
#include <stdio.h>

/**
 * print_binary - this is the function that prints the binary
 * representation of n
 *@n: this is the integer.
 *Return: this returns zero
 */

void print_binary(unsigned long int n)
{

	if (n >> 0)
	{
		if (n >> 1)
			print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	else
	{
	_putchar('0');
	}
}
