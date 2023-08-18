#include "main.h"
/**
*more_numbers - prints numbers to 14
*
*Return: returns 0
*/
void more_numbers(void)
{
int digit1, digit2;
for (digit1 = 0; digit1 < 10; digit1++)
{
for (digit2 = 0; digit2 < 14; digit2++)
{
if (digit2 > 9)
{
_putchar((digit2 / 10) + '0');
}
_putchar((digit2 % 10) + '0');
}
_putchar('\n');
}
}
