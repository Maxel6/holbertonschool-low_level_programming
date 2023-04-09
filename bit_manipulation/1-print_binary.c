#include "main.h"

/**
 * print_binary - Print a decimal number in binary
 * @n: unsigned int to print
 */

void print_binary(unsigned long int n)
{
	if (!n)
		_putchar('0');

	else if (n == 1)
		_putchar('1');

	else
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
}
