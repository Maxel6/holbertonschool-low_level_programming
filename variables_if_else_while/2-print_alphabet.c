#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * a for loop how print the alphabet in lowcase
 * followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
