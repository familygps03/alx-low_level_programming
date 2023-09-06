#include "main.h"

/**
* free_grid - frees a 2d array
*@grid:memory block to be freed
*@height:height of the array
*Return:returns void
*/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
