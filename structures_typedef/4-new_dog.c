#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpname = NULL;
	char *cpowner = NULL;
	int namelen = 0;
	int owlen = 0;
	int i;
	dog_t *dog = malloc(sizeof(dog_t));

	while (owner[owlen])
		owlen++;
	while (name[namelen])
		namelen++;
        cpname = malloc(sizeof(char) * namelen + 1);
        cpowner = malloc(sizeof(char) * owlen + 1);
	dog->name = malloc(sizeof(char) * namelen + 1);
	dog->owner = malloc(sizeof(char) * owlen + 1);
	for (i = 0; i < owlen; i++)
		cpowner[i] = owner[i];
	cpowner[i] = 0;
	for (i = 0; i < namelen; i++)
		cpname[i] = name[i];
	cpname[i] = 0;
	if (dog == NULL)
		return (NULL);
	dog->name = cpname;
	dog->age = age;
	dog->owner = cpowner;
	return (dog);


}
