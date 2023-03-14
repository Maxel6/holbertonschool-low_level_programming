#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *@width: the width of th array
 *@height: the height of the array
 *Return: a pointer to a 2 dimensional array of 0
 */
int **alloc_grid(int width, int height)
{
	int **p = 0;
	int i;
	int j;

	p = malloc(sizeof(int *) * height);
	if (p == 0 || width == 0 || height == 0)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = malloc(sizeof(int) * width);
		if (p[i] == 0)
		{
			for (; i >= 0; i--)
				free(p[i]);
			free(p);
			return (0);
		}
		for (j = 0; j < width; j++)
			p[i][j] = 0;
	}
	return (p);
}

