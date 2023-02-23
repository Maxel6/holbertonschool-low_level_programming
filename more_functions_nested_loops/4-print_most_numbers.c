#include "main.h"
/**
 * print_most_numbers - print the numbers from 0 to 9 exept 2 and 4
 */
void print_most_numbers(void)
{
	int idx;

	for (idx = 0; idx < 10; idx++)
	{
		if (idx != 2 && idx != 4)
		_putchar(idx +  '0');
	}
	_putchar('\n');
}
