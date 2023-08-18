#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
	for (char c = 'a'; c <= 'z'; c++)
	{
	_putchar(c);
	}
	}
	_putchar('\n');

}
