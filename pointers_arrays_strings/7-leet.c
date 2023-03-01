#include "main.h"
/**
 * leet - change some character in numbers
 * @s: the string to modify
 * Return: the new value of s
 */
char *leet(char *s)
{
	char lower[] = {'a', 'e', 'o', 't', 'l'};
	char upper[] = {'A', 'E', 'O', 'T', 'L'};
	char number[] = {'4', '3', '0', '7', '1'};
	int i = 0;
	int j = 0;

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == lower[j] || s[i] == upper[j])
				s[i] = number[j];
		}
		i++;
	}
	return (s);
}

