#include "main.h"
/**
 *_puts - a function that  prints a string
 * @str: string to be  printed
 *
 *Description: prints a string
 * Return: when succeed return the number of characters printed
 */

void _puts(char *str)
{
while (*str)
_putchar(*str++);

_putchar('\n');
}
