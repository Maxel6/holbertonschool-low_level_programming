#include "dog.h"
#include "main.h"
#include <stdio.h>
/**
 * init_dog - initialize a variable of type struct dog
 * @d: varriable struct dog to init
 * @name: name of the dog
 * @age: age of the dog
 * @owner: dog owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}
