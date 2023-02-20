#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * a for loop how prints all the numbers of base 16 in lowercase
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		} else
			putchar(num - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
