#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block using
 * @ptr: pointer to the memory previously allocated 
 * @old_size:  is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: ptr with the new size 0 if the program fail
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	ptr = malloc(new_size);
	if (ptr == NULL)
		return (NULL);
	return (ptr);
}
