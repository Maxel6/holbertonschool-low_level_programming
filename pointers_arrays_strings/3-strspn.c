#include "main.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @accept: the chars accepted
 * @s:the string to compare
 * Return:the length of a prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	unsigned int res = 0;
	int match;

	for (j = 0; s[j] != '\0'; j++)
	{
		match = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (s[j] == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			break;
		res++;
	}
	return (res);
}
