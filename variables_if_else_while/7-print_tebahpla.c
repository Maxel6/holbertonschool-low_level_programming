#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * a for loop how print the alphabetin reverse in lowcase
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'z'; lower >= 'a'; lower--)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
