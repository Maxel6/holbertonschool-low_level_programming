#include "main.h"
/**
 * _strncat - copy n char a the end of dest
 * @dest: is the destination
 * @src: is the sring source
 * @n: the number of char to copy
 * Return: dest, the result
 */
char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (i != n && src[i] != '\0')
	{
		dest[len] = src[i];
		len++;
		i++;
	}
	return (dest);
}

