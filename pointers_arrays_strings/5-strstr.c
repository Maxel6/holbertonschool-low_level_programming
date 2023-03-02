#include "main.h"
/**
 * _strsnp - gets the length of a prefix substring.
 * @accept: the chars accepted
 * @s:
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	int match;
	for (; *haystack != '\0'; haystack++)
	{
		match = 0;
		for (i = 0; needle[i] != '\0'; i++)
		{
			if (*(haystack + i) != needle[i])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
			return (haystack);
	}
	return (0);
}
