#include "main.h"
#include <stdlib.h>
/**
 *free_grid - free a grind
 *@grid: the array to free
 *@height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
