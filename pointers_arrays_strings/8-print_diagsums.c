#include "main.h"
#include <stdio.h>
/**
 * print_diagsmus - prints the sum of the two diagonals of a square matrix of integers
 * @a: point the array
 * @size: is the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int d1;
	int d2;
	int j;

	for (i = 0; i < size; i++)
	{
		d1 += a[i * size + i];
		d2 += a[i * size + j];
	}
	printf("%d, %d\n", diag1, diag2);
}
