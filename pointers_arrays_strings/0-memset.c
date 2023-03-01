#include "main.h"
/**
 * _memset -fills memory with a constant byte.
 * @s: the string to modify
 * @b: is the char to remplace with
 * @n: is the number of of bytes to modify
 * Return: the new string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
