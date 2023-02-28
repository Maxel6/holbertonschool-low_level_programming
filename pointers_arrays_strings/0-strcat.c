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

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[i] != '\0')
	{


		dest[len] = src[i];
		len++;
		i++;
	}
	dest[len] = '\0';
	return (dest);
}
