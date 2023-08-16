#include <stdio.h>
/**
*main - prints out first terms
*fibonacci suit numbers
*Return: return 0
*/

int main(void)
{
	int term1 = 1;
	int term2 = 2;
	int sum = 0;

	while (term2 <= 4000000)
	{
	if (term2 % 2 == 0)
	{
	sum += term2;
	}

	int next_term = term1 + term2;

	term1 = term2;
	term2 = next_term;
	}

	printf("%d\n", sum);
	return (0);
}

