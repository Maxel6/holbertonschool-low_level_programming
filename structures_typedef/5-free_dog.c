#include <stdlib.h>
#include "dog.h"
void free_dog(dog_t *d)
{
	free(dog->owner);
	free(dog->name);
	free(dog);
}
