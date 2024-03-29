#include "main.h"
/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: the string cointains the binary
 * Return: unsigned int result
 */

unsigned int binary_to_uint(const char *b)
{

	int res = 0;

	if (b == NULL)
		return (0);
	
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		res = (res << 1) + *b - '0';
		b++;
	}

	return (res);
}
