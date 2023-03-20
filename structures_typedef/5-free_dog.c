#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - free all memory of d
 * @d: the pointer to free
 */
void free_dog(dog_t *d)
{
	free(d->owner);
	free(d->name);
	free(d);
}
