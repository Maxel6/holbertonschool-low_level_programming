#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: the size to allocate
 * Return: a memory adress
 */
void *malloc_checked(unsigned int b)
{
	void *p = 0;

	p = malloc(b);
	if (p == 0)
		exit(98);
	return (p);
}
