#include "main.h"
/**
*times_table - prints the 9 times table
*
*Return: returns nothing
*/
void times_table(void)
{
int count, product, output;
for (count = 0; count <= 9; count++)
{
_putchar('0');

for (product  = 1; product <= 9; product++)
{
_putchar(',');
_putchar(' ');
output = count * product;
if (output <= 9)
_putchar(' ');
else
_putchar((output / 10) + '0');

_putchar((output % 10) + '0');
}
_putchar('\n');
}
}
