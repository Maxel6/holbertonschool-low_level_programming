#include "main.h"
/**
 *_strstr - that locates a substring
 * @needle: the chars accepted
 * @haystack:the string to compare
 * Return: a pointer to the beginning of the located substring 0 else
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
