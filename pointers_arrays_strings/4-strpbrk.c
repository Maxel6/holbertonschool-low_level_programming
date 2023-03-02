#include "main.h"
/**
 * _strsnp - gets the length of a prefix substring.
 * @accept: the chars accepted
 * @s:
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	for (; *s != '\0'; s++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
	}
	return (0);
}
