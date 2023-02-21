#include "main.h"
/**
 * print_last_digit - print the last digit of n
 * @n: the var we need the last digit
 * Return: the last digit
 */
int print_last_digit(int n)
{
	n = n % 10;
	_putchar(n + '0');
	return (n);
}
