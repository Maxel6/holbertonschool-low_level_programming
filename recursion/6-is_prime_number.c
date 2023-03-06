#include "main.h"

/**
 * isprime - checks for prime number
 * @n: the entry
 * @y: value to check
 * Return: 0 if n is prime 0 else
 */

int isprime(int n, int y)
{
	if (y == 1)
		return (1);
	else if (n % y == 0)
		return (0);
	return (isprime(n, y - 1));
}

/**
 *is_prime_number - call isprime with conditions
 * @n: the entry
 * Return: 0 if n is prime 1 else
 */

int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	return (primenumb(n, n - 1));
}
