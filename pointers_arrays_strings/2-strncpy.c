#include "main.h"
/**
 * _strncpy - copy string
 * @dest: the destination string
 * @src: source string
 * @n: number of char ton copy
 * Return: the result in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while  (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
