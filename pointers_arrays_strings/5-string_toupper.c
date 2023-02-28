/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@str: point the array
 *Return: the value of str
 */
#include "main.h"
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
	}
	return (str);
}
