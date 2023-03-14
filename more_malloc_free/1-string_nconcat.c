#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string source 1
 * @s2: string source 2
 * @n: number of char from s2 to copy
 * Return: the result of the concat
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *dest = 0;
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i;
	unsigned int j;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	dest = malloc(sizeof(char) * (len1 + n) + 1);
	if (dest == 0)
		return (0);
	for (i = 0; s1[i]; i++)
		dest[i] = s1[i];
	for (j = 0; j < n; i++, j++)
		dest[i] = s2[j];
	dest[i] = 0;
	return (dest);
}
