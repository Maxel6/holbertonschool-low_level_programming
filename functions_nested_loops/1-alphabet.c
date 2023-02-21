#include "main.h"
#include <stdio.h>
/**
 * void function print_alphabet without sets
 * print the alphabet with _putchar
 * no return
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

