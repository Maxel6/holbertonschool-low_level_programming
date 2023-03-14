#include "main.h"
#include <stdlib.h>

void *malloc_checked(unsigned int b)
{
	void *p = 0;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
