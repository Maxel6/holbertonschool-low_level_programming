#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	int namelen = 0, owlen = 0, i = 0;
	dog_t *dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);
	while (owner[owlen])
		owlen++;
	while (name[namelen])
		namelen++;
	
	dog->name = malloc(sizeof(char) * namelen + 1);
	dog->owner = malloc(sizeof(char) * owlen + 1);
	if (dog->name == NULL || dog->owner == NULL)
	{
		free(dog->owner);
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < owlen; i++)
		dog->owner[i] = owner[i];
	dog->owner[i] = '\0';
	for (i = 0; i < namelen; i++)
		dog->name[i] = name[i];
	dog->name[i] = '\0';
	dog->age = age;
	return (dog);
}
