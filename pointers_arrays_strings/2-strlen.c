#include "main.h"
/**
 * _strlen - return the length of a string
 * @s: the char of the string
 * Return: i: number of char in the string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
