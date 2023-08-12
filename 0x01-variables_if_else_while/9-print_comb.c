#include<stdio.h>
/**
 * main - this is the main function
 * Return: 0 (success)
 */

int main(void)
{
	int p;

	for (p = 0; p < 10; p++)
	{
		putchar(p + '0');
		if (p == 9)
			continue;
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);







}
