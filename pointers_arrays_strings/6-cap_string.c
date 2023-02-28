#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: point the array to modify
 * Return: the string
 */

char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == 9 || str[i] == '\n' || str[i] == ',')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
		if (i == 0)
                  {
                          if (str[i] >= 'a' && str[i] <= 'z')
                                  str[i + 1] -= 32;
                  }
		i++;
	}
	return (str);
}
