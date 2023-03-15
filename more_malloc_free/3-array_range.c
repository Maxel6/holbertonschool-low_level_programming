#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * array_range - creates an array of integers
 * @min: the first number of the array
 * @max: the last number of the array
 * Return: The array of int or 0 if fail
 */
int *array_range(int min, int max)
{
	int size = max - min;
	int i = 0;
	int j = 0;
	int *p = 0;

	if (min > max)
		return (0);
	p = malloc(sizeof(int) * (size + 1));
	if (p == 0)
		return (0);
	for (i = min; i <= max; i++, j++)
	{
		p[j] = i;
	}
	return (p);


}
