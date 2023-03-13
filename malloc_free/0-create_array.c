#include "main.h"
#include <stdlib.h>
/**
 *create_array - creates an array of chars, and initializes it with a char
 *@c: the char
 *@size: the size of the array
 *Return: the new array if size > 0 - 0 else
 */
char *create_array(unsigned int size, char c)
{
	char *new = malloc(sizeof(char) * size);
	unsigned int i;

	if (size == 0)
		return (0);
	if (new == 0)
		return (0);
	for (i = 0; i < size; i++)
		new[i] = c;
	return (new);
}
