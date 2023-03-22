#include "variadic_functions.h"
/**
 * print_numbers - print all numbers in arguments
 * @separator: the char between each numbers
 * @n: number of elements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list op;
	char* str = 0;

	va_start(op, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(op, char*);
		printf("%s", str);
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
}
