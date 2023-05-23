#include "search_algos.h"

int binary_search(int *array, size_t size, int value)
{
	int l = 0, h = (int)size - 1, m = (h - l) / 2, ll, hh;

	while (l <= h)
	{
		printf("Searching in array: %d", array[l]);
		ll = l+1, hh = h;
		while (ll <= hh)
		{
			printf(", %d", ll);
			ll++;
		}
		printf("\n");
		m = l + (h - l) / 2;
		if (array[m] == value)
			return m;

		if (array[m] < value)
			l = m + 1;

		else
			h = m - 1;
	}

	return -1;
}
