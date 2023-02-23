#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: the size of the line
 */
void print_diagonal(int n)
{
	int c;
	int i;

	for (c = 0; c < n; c++)
	{
		for (i = 0; i < c; i++)
		{
			_putchar (' ');

		}
		_putchar(92);
	}
	_putchar('\n');
}
