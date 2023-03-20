#include "function_pointers.h"
/**
 * int_index - searches for an integer
 * @cmp: pointer to the function to be used to compare values
 * @size: is the number of elements in the array
 * @array: integers array
 * Return: the index of the first element for which the cmp
 * function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
