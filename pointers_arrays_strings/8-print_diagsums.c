#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: point the array
 * @size: is the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int d1 = 0;
	int d2 = 0;

	for (; i < size; i++)
	{
		int j = size - 1 - i;

		d1 += a[i * size + i];
		d2 += a[i * size + j];
	}
	printf("%d, %d\n", d1, d2);
}
