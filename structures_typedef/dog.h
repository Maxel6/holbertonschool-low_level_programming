#ifndef DOG_H
#define DOG_H
/**
 * struct dog - informations of a dog
 * @name: name of the dog : char*
 * @age: age of the dog : float
 * @owner: the dog owner : char*
 *
 * Description: contains the age, name and owner of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
