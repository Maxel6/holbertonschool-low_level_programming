#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
dog_t *new_dog(char *name, float age, char *owner)
{
	char *cpname = NULL, *cpowner = NULL;
	int namelen = 0, owlen = 0, i = 0;
	dog_t *dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);
	while (owner[owlen])
		owlen++;
	while (name[namelen])
		namelen++;
        cpname = malloc(sizeof(char) * namelen + 1);
	if (cpname == NULL)
		return (NULL);
	cpowner = malloc(sizeof(char) * owlen + 1);
	if (cpowner == NULL)
                return (NULL);
	dog->name = malloc(sizeof(char) * namelen + 1);
	if (dog->name == NULL)
		return (NULL);
	dog->owner = malloc(sizeof(char) * owlen + 1);
	if (dog->owner == NULL)
                return (NULL);
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
