#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * a for loop how print the alphabet in lowcase
 * then in upper followed by a newline
 * Return: Always 0 (Success)
 */

int main(void)
{
	char lower;
	char upper;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper  <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
}
