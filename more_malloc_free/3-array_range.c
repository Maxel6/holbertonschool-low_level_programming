#include "main.h"
#include <stdlib.h>

int *array_range(int min, int max)
{
	int size = max - min;
	int i = 0;
	int j = 0;
	int *p = 0;

	if (min > max)
		return(0);
	p = malloc(sizeof(int) * size);
	if (p == 0)
		return (0);
	for (i = min; i >= max; i++, j++)
	{
		p[j] = i;
	}
	return (p);


}
