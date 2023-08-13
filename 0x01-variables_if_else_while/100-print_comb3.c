#include <stdio.h>
/**
 * main - this is the main function
 * Return: 0 ( success)
 */

int main(void)
{
	int p;
	int k;

	for (p = 0; p < 9; p++)
	{
		for (k = p + 1; k < 10; k++)
		{
			putchar(p + '0');
			putchar(k + '0');
			if (p == 8 && k == 9)
				continue;
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');
	return (0);
}
