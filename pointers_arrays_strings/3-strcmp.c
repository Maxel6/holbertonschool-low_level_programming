#include "main.h"
/**
 * _strcmp - compare two string
 * @s1: string 1 to compare
 * @s2: sting 2 to compare
 * Return: the difference between 2 strings
 */
int _strcmp(char *s1, char *s2)
{
	int conv_s1;
	int conv_s2;
	int i = 0;

	while (s1[i] != '\0')
	{
		conv_s1 = s1[i];
		conv_s2 = s2[i];
		if (conv_s1 != conv_s2)
			return (conv_s1 - conv_s2);
		i++;
	}
	return (0);
}
