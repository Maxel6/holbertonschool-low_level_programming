#include "main.h"
#include <stdio.h>
/**
 *_islower - test if the char c is lower
 *@c: is a int
 *Return: 1 if c is lower , 0 else
 */
int _islower(int c)
{
	if (c > 'a' && c < 'z')
		c = 1;
	else
		c = 0;
	return (c);
}
