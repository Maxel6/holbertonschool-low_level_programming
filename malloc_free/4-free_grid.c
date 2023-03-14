#include "main.h"
#include <stdlib.h>
/**
 *free_grind - free a grind
 *@grind: the array to free
 *@height: the height of the array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
