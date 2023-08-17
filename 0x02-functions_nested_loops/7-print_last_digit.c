#include "main.h"
/**
*print_last_digit - function that print last digit of a number
*@n: number to be targeted
*Return: returns 0
*/
int print_last_digit(int n)
{
int lastdigt = n % 10;
if (lastdigt < 0)
lastdigt *= -1;

_putchar (lastdigt + '0');
return (lastdigt);
}
