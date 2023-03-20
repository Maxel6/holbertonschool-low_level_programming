#include "function_pointers.h"
/**
 * print_name - print a string using the function passed
 * @name: the string to print
 * @f: the print fonction to use
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
