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
			if (x!=9)
			{
				if (res < 10)
				{
					_putchar(res + '0');
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(res / 10 + '0');
					_putchar(res % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}

			}
			else
				_putchar('\n');

		}
	}
}

