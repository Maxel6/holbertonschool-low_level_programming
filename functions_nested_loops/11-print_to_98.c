#include "main.h"
void print_to_98(int n)
{
	int i;
	int sec_d = i / 10 + '0';
	int last_d = i % 10 + '0';
	int neg

	if (n == 98)
	{
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar('\n');
	}
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i >= 0 && i< 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i > 9 && < 100)
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				else 
					_putchar('\n');
			}
		}
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
			}
			if (i > 9 )
			{
				_putchar(i / 10 + '0');
				_putchar(i % 10 + '0');
				if (i != 98)
				{
					_putchar(',');
					_putchar(' ');
				}
				else
					_putchar('\n');
			}
		}
	}
}
