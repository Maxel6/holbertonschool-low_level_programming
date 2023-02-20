#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * prints all single digit numbers of base 10 starting from 0
 * followed by a , and a space
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = 0; digit < 10; digit++)
	{
		putchar(digit + '0');
		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
