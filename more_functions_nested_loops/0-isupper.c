/**
 *_isupper - checks for uppercase character.
 *@c: char we need to test
 *Return: 1 if is uppercase 0 else
 */
#include "main.h"
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 1;
	else
		c = 0;
	return (c);
}
