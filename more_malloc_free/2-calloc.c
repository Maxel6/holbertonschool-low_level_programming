#include "main.h"
#include "stdlib.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int *p = 0;
	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	while (p < size)
	{
		*p = 0;
		p++;
	}
	return (p);
}
