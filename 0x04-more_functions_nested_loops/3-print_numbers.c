#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns 0
*/
void print_numbers(void)
{
char  number;
for (number = '0'; number < '9'; number++)
{
_putchar(number);
}
_putchar('\n');
}
