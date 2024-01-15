#include "main.h"
/**
  * _islower - it checks if character is in lower case
  * @c: is the character to be checked
  * Return: return 0 or 1
  */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
