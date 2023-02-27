#include "main.h"

void puts_half(char *str)
{
	int i = 0;
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
	while (str[i] <= len)
	{
		if (len % 2 == 1)
		{
			if (i > (len - 1) / 2)
				_putchar(str[i]);
		}
		if (len % 2 == 1)
		{
			if (i > len / 2)
				_putchar(str[i]);
		}

		i++;
	}
	_putchar('\n');
}
