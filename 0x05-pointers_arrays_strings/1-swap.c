#include "main.h"
/**
*swap_int - function to swap two integers
*@a: first integer
*@b: second integer
*Return: always returns 0
*/

void swap_int(int *a, int *b)
{
int tm = *a;
*a = *b;
*b = tm;
}
