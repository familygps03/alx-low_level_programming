#include "main.h"
/**
*print_numbers - function that print all numbers from
*0 to 9
*
*Return: returns 0
*/
void print_numbers(void)
{
int digit;

for (digit = 48; digit < 58; digit++)
{
_putchar(digit);
}
_putchar('\n');
}
