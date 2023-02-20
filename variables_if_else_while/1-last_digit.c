#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - Entry point
 * Print < 6 and =/ 0, zero or > 5 for a random value
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int n_modulo;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	n_modulo = n % 10;
	if (n_modulo > 5)
	{
		printf("Last digit of %d is %d and is greater than 5", n, n_modulo);
	}
	if (n_modulo == 0)
		printf("Last digit of %d is %d and is 0", n, n_modulo);
	else 
	{
		if (n_modulo < 6)
			printf("Last digit of %d is %d and is less than 6 and not 0", n, n_modulo);
	}
	return (0);
}
