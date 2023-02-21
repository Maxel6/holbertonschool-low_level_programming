#include "main.h"
/**
 * _abs - remove the signe
 * @a: signed int
 * Return: a without sign
 */
int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
