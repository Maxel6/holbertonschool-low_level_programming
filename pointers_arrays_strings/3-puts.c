#include "main.h"
/**
 *_puts - print a string
 *@str: is a char of the string we want print
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
