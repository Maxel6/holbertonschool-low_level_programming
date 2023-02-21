#include "main.h"
#include <stdio.h>
/**
 *_isalpha - test if the c is a letter
 *@c: is a int
 *Return: 1 if c is a letter , 0 else
 */
int _isalpha(int c)
{
	if ((c > 'a' && c < 'z') || (c > 'A' && c < 'Z'))
		c = 1;
	else
		c = 0;
	return (c);
}

