#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *array;
	int i, j = 0;

	if (min > max)
		return (NULL);
	array = malloc(sizeof(array) * ((max - min) + 1));
	if (array == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
		{
			array[j] = i;
			j++;
		}
		return (array);
	}

}
