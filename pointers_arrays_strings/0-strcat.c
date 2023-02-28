#include "main.h"
/**
 * _strcat - merge two string
 *@dest: contains the 2 string
 *@src: the string to merge
 *Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (dest[len] != '\n')
	{
		len++;
	}
	while (src[i] != '\n')
	{
		dest[len] = src[i];
		i++;
		len++;
	}
	dest[len] = '\n';
	return (dest);
}
