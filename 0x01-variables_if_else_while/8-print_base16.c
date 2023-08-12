#include <stdio.h>
/**
 * main - this is the main function
 * Return: 0 (success)
 */

int main(void)
{
	int p;
	char k;

	for (p = 0; p < 10; p++)
		putchar(p + '0');
	for (k = 'a'; k < 'f'; k++)
		putchar(k);
	putchar('\n');
	return (0);
}
