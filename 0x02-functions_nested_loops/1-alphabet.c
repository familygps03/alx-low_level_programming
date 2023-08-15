#include "main.h"
/**
 * print_alphabet - this is the function to print alphabets
 * Return: void
 */

void print_alphabet(void)
{
	char digit;

	for (digit = 'a'; digit <= 'z'; digit++)
	{
		_putchar(digit);
		_putchar('\n');
	}

}
