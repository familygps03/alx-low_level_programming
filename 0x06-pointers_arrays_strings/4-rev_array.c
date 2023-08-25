#include "main.h"

/**
*  reverse_array - function that reverse content of array
*  @a: array
*  @n: number of elements
*/

void reverse_array(int *a, int n)
{
int tm, num;
for (num = n - 1; num > n / 2; num--)
{
tm = a[n - 1 - num];
a[n - 1 - num] = a[num];
a[num] = tm;
}
}
