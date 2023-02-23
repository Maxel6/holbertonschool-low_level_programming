#include "main.h"
/**
 * more_numbers - print the numbers from 0 to 14
 */
void more_numbers(void)
{
	int idx;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (idx = 0; idx < 15; idx++)
		{
			if (idx < 10)
				_putchar(idx + '0');
			else
			{
				_putchar(idx / 10 + '0');
				_putchar(idx % 10 + '0');
			}
		}

		_putchar('\n');
	}
}
