#include "main.h"

/**
* _strdup - returns a pointer to a newly allocated
*space in memory, which contains a copy of the
*string given as a parameter.
*@str:String to be copied
*
*Return: NULL in case of error, pointer to allocated
*space
*/

char *_strdup(char *str)
{
	char *copy;
	int i, count;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		count++;
	copy = malloc(sizeof(char) * (count + 1));

	if (copy == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		copy[i] = str[i];
	}

	copy[count] = '\0';

	return (copy);

}
