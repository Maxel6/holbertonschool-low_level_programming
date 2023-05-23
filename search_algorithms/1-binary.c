#include "search_algos.h"
/**
 * binary_search - search for a value using binary search
 * @array: the array to search in
 * @size: the size of the array
 * @value: the value to check for
 * Return: The index of the array contain the value, -1 else
*/
int binary_search(int *array, size_t size, int value)
{
	int l = 0, h = (int)size - 1, m = (h - l) / 2, i;

	while (l <= h)
	{
		printf("Searching in array: %d", array[l]);
		for (i = l + 1; i <= h; i++)
		{
			printf(", %d", array[i]);
		}
		printf("\n");
		m = l + (h - l) / 2;
		if (array[m] == value)
			return (m);

		if (array[m] < value)
			l = m + 1;

		else
			h = m - 1;
	}

	return (-1);
}
