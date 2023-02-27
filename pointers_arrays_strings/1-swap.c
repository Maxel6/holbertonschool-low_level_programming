#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap the value of to integers
 * @a: get the value of b
 * @b: bet the value of a
 */

void swap_int(int *a, int *b)
{
		int c = *a;

		*a = *b;
		*b = c;
}
