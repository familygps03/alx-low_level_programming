#include "main.h"
/**
*print_square - prints squares
*@size: parameter
*Return:returns 0
*/
void print_square(int size)
{
int num1, num2;
if (size > 0)
{
for (num1 = 0; num1 < size; num1++)
{
for (num2 = 0; num2 < (size - 1); num2++)
_putchar('#');

_putchar('#');
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
