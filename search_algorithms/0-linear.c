#include "search_algos.h"
/**
 * linear_search - serarch a value in an array using linear searching
 * @array: the array to check
 * @size: the size of the array
 * @value: the value to search in the array
 * Return: the index of the value if found, -1 else
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (size)
	{
		while (i < size)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
