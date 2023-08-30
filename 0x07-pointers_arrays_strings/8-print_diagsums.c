#include "main.h"
/**
*print_diagsums -  a function that prints the sum of
* the two diagonals of a square matrix of integers.
*@a:matrix to be summed
*@size:size of the matrix
*/
void print_diagsums(int *a, int size)
{
	int b, sum1 = 0, sum2 = 0;

	for (b = 0; b < size; b++)
	{
		sum1 += a[b];
		a += size;
	}

	a -= size;

	for (b = 0; b < size; b++)
	{
		sum2 += a[b];
		a -= size;
	}

	printf("%d, %d\n", sum1, sum2);
}
