#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @dest: the destination string
 * @src: the source string
 * @n: is the number of of bytes to modify
 * Return: the new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
