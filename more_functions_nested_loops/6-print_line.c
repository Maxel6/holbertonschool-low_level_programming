#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 *@c: is the number of _ we want in the line
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');		
}
