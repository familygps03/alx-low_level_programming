#include "main.h"
/**
*print_array -  a function to print n element of array
*@a:an array
*@n: number of elements
*Return: returns 0
*/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n ; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);

}
printf("\n");
}
