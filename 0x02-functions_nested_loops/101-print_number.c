#include "main.h"
/**
 * print_number - Prints a number
 * @n: The number to print
 * 
 */
void print_number(int n)
{
unsigned int digit = n;
if (n < 0)
{
_putchar('-');
digit = -digit;
}
if (digit > 9)
{
print_number(digit / 10);
}
_putchar(digit % 10 + '0');
}
