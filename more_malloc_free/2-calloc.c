#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array
 * @nmemb: number of array elements
 * @size: number of bytes of array elements
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = 0;
	unsigned int i = 0;

	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	while (i < nmemb * size)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
