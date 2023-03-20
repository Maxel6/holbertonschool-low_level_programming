#include "function_pointers.h"
/**
 * array_iterator - call the function action size times with array in parameter
 * @array: input int array
 * @size: array size
 * @action: point the function to call
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
