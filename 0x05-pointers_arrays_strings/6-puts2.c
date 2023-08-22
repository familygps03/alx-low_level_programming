#include "main.h"

/**
 * puts2 - prints every other xter of a string
 * @str: string to be printed
 *
 * Return: always returns 0
 **/
void puts2(char *str)
{
int j = 0;
while (str[j] != '\0')
{
if (j % 2 == 0)
_putchar(str[j]);
j++;
}

_putchar('\n');
}
