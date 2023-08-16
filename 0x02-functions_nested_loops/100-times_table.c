#include "main.h"
/**
*print_times_table - prints the  times table with
*parameter
*@n: parameter
*Return: returns nothing
*/
void print_times_table(int n)
{
int count, product, output;
if (n >= 0 && n <= 5)
{
for (count = 0; count <= n; count++)
{
_putchar('0');

for (product = 1; product <= n; product++)
{
_putchar(',');
_putchar(' ');
output = count * product;
if (output <= 99)
_putchar(' ');

if (output <= 9)
_putchar(' ');
if (output >= 100)
{
_putchar((output / 100) + '0');
_putchar((output / 10) % 10 + '0');
}
else if (output <= 99 && output >= 10)
{
_putchar((output / 10) + '0');
}
_putchar((output % 10) + '0');
}
_putchar('\n');
}
}
}
