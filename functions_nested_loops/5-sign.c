#include "main.h"
/**
 * print_sign - display the sign of n
 * @n: is the int we test
 * Return: 1 if >0, 0 if ==0 and -1 if <0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		n = 1;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -1; 
	}
	if (n == 0)
		_putchar('0');
	return (n);
}
