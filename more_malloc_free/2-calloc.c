#include "main.h"
#include "stdlib.h"

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = 0;
	unsigned i = 0;

	if (size == 0 || nmemb == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	while(i <= nmemb)
	{
		p[i] = 0;
		i++;
	}
	return (p);
}
