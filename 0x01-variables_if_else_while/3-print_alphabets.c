#include <stdio.h>
/**
 * main - this is main function
 * Return: 0 ( succcess)
 */

int main(void)
{
	char p;

	for (p = 'a'; p <= 'z'; p++)
		putchar(p);
	for (p = 'A'; p <= 'Z';  p++)
		putchar(p);
	putchar('\n');
	return (0);
}
