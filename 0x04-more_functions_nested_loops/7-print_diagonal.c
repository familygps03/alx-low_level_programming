#include "main.h"
/**
*print_diagonal - prints a diagonal
*@n:parameter
*Return:returns 0
*/
void print_diagonal(int n)
{
int dist, space;
if (n > 0)
{
for (dist = 0; dist < n; dist++)
{
for (space = 0; space < dist; space++)
_putchar(' ');

_putchar('\\');

if (dist == (n - 1))
continue;
_putchar('\n');
}
}
_putchar('\n');
}
