#include "main.h"
/**
 *_puts - print only pair
 *@str: is a char of the string we want print
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
