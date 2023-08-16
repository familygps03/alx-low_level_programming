#include "main.h"
#include<stdio.h>
/**
 * print_to_98 - this is the function that prints the n to 98
 * natural numbers from n to 98
 *@n: is the initial integer
 * Return: returns void
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}

	}
	else
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	printf("\n");
}
