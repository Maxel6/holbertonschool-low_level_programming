#include "main.h"
void times_table(void)
{
	int x = 0;
	int y = 0;
	int res;
	for(y = 0; y < 10; y++)
	{
		for(x = 0; x < 10; x++)
		{
			res = x*y;
			if (y != 0)
			{
				if (res < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(res + '0');
				}
				if (res >= 10)

				{
					_putchar(',');
					_putchar(' ');
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
				}

			}
			else
				_putchar('0');
		}
		_putchar('\n');
	}
}

