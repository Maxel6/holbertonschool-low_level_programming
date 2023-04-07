#include "main.h"

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int len = 0, i = 0;

	if (b == NULL)
		return (0);
	while (b[len])
		len++;
	for (i = len - 1; i >= 0; i--)
	{
		if (b[i] == '1')
		{
			res <<= 1;
			res = res | 0x01;
		}
		else if (b[i] == '0')
			res <<= 1;
		else
			return (0);
	}
	return (res);
}
