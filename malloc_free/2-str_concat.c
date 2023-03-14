#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1: 1st string to concat
 * @s2: 2nd string to concat
 * Return: the 2 string concated or 0 if the function fail
 */

char *str_concat(char *s1, char *s2)
{
	char *dest;
	int len1 = 0;
	int len2 = 0;
	int i;
	int j;

	if (s1 == 0 && s2 == 0)
		return (0);
	if (s1 == 0)
		return (s2);
	if (s2 == 0)
		return (s1);
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	dest = malloc(sizeof(char) * (len1 + len2) + 1);
	if (dest = 0)
		return (0);
	for (i = 0; s1[i]; i++)
		dest[i] = s1[i];
	for (j = 0; s2[j]; i++, j++)
		dest[i] = s2[j];
	return (dest);
}
