#include "main.h"
/**
* _abs - prints the absolute value of a number
*@num: number targeted
*Return: returns 0
*/

int _abs(int num)
{
	if (num < 0)
	return (-num);
	else if (num > 0)
	return (num);
	else
	return (0);
}
