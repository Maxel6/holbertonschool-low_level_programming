#include "main.h"
/**
 * print_chessboard -prints the chessboard.
 * @a: a matrix
 */
void print_chessboard(char (*a)[8])
{
	int y;
	int x = 0;

	for (y = 0; y < 8; y++)
	{
		for (x = 0; x < 8; x++)
		{
			_putchar(a[y][x]);
		}
		_putchar('\n');
	}
}
