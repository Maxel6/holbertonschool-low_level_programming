#include "variadic_functions.h"
/**
 * print_numbers - print all numbers in arguments
 * @separator: the char between each numbers
 * @n: number of elements
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list op;
	int number = 0;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		number = va_arg(op, int);
		printf("%d", number);
		if (i != n - 1)
		{
			printf("%s", separator);
			printf(" ");
		}
	}
	printf("\n");
}
