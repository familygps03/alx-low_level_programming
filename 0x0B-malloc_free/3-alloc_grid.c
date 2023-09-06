#include "main.h"



/**
* alloc_grid - returns a pointer to a
*2 dimensional array of integers.
*@width: width oàf array
*@height: height of array
*
*Return: pointer to the array
*/

int **alloc_grid(int width, int height)
{
	int **output;
	int i = 0, j;

	if (width == 0 || height == 0)
		return (NULL);
	output = (int **) malloc(sizeof(int *) * height);
	if (output != NULL)
	{
		for (; i < height; i++)
		{
			output[i] = (int *) malloc(sizeof(int) * width);
			if (output[i] != NULL)
			{
				for (j = 0; j < width; j++)
					output[i][j] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(output[i]);
					i--;
				}
				free(output);
				return (NULL);
			}
		}
		return (output);
	}
	else
	{
		return (NULL);
	}
}
