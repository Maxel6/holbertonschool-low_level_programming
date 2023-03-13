#include "main.h"
#include <stdlib.h>
/**
 * _strdup - newly allocated space in memory, which contains
 *  a copy of the string given as a parameter.
 *  @str: the entry string to copy
 *  Return: the dest string or 0 if the program fail
 */

char *_strdup(char *str)
{
	char *dest;
	int len = 0;
	int i;
		
	while (str[len])
		len ++;
	if (len = 0)
		return (0);
	dest = malloc(sizeof(char) * len);
	if (dest == 0)
		return (0);
	for (i = 0; i < len; i++)
		dest[i] = str[i];
	return (dest);
}
