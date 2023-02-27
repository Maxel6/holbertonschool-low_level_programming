#include "main.h"
/**
 * _strcpy copy a string
 * @src: point to strng to copy
 * @dest: the buffur contains the copy
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
