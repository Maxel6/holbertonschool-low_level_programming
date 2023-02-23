#include "main.h"
/**
 * print_numbers - print the numbers from 0 to 9
 */
void print_numbers(void)
{
	int idx;

	for (idx = 8; idx < 10; idx++)
	{
		_putchar(idx +  '0');
	}
	_putchar('\n');
}
