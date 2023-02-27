#include "main.h"
/**
 *puts_half - print the seconf half of a string
 *@str: a char of the string
 */
void puts_half(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	for (; i < len; i++)
	{
		if (i > ((len - 1) / 2))
		{
		_putchar(str[i]);
		}
	}
	_putchar('\n');
}
