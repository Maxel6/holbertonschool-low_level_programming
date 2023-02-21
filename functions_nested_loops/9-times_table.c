#include "main.h"
void times_tables(void)
{
	unsigned int x = 0;
	unsigned int res;
	int y = 0;
	for(y = 0; y < 10; y++)
	{
		for(x = 0; x < 10; x++)
		{
			res = x*y;
			if (res < 10)
				_putchar(res + '0');
			else 
				_putchar(res / 10 + '0');
			putchar(res % 10 + '0');
			if (x==9)
				_putchar('\n');
			else
				_putchar(',');
				_putchar(' ');
		}
	}
}


