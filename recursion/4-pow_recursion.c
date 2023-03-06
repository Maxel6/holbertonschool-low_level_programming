#include "main.h"
/**
 * _pow_recursion - return the value of x raised to the power of y
 * @x: is the number to multiplie
 * @y: is the power of x
 * Return: x^y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	if (y > 0)
		return (x * _pow_recursion(x, y - 1));
	else
		return (-1);
}
