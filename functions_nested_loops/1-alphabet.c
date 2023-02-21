#include "main.h"

/**
 * main - check the code
 * call Print_alphabet function
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}
/**
 * void function print_alphabet without sets
 * print the alphabet with putchar
 * no return
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
