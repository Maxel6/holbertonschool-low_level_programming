#include "main.h"
/**
 *print_square - function that print a square
 *@size: the size of the square
 */
void print_square(int size)
{
	int width;
	int length;

	for (width = 0; width < size; width++)
	{
		for (length = 0; length < size; length++)
		{
			_putchar('#');
		}
		_putchar('\n');

	}
}
