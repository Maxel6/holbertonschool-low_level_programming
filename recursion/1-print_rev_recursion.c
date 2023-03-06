#include "main.h"
/**
 *_print_rev_recursion - prints a string in reverse.
 *@s: is a char of a string
 */
#include <stdio.h>

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
