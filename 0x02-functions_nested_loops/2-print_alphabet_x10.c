#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
	int digit = 0;
	int element;

	while (digit <= 9)
	{
	for (element = 'a'; element <= 'z'; element++)
	_putchar(element);
	_putchar('\n');
	}

}
