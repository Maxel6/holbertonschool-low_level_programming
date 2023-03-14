#include "main.h"
#include "stdlib.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p = 0;
	unsigned int i = 0;
	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	while (p[i])
	{
		p[i] = '0';
		i++;
	}
	return (p);
}
