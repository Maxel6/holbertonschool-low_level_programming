#include "main.h"
/**
 * jack_bauer - print all hh:mm combinaisons
 */
void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	while (hour < 24 && minute < 60)
	{
		_putchar('0' + hour / 10);
		_putchar('0' + hour % 10);
		_putchar(':');
		_putchar('0' + minute / 10);
		_putchar('0' + minute % 10);
		_putchar('\n');
		minute++;
		if (minute == 60)
		{
			minute = 0;
			hour++;
		}
	}
}
