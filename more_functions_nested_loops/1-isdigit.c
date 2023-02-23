/**
 *_isdigit - checks for a digit.
 *@c: digit we need to test
 *Return: 1 if is a digit 0 else
 */
#include "main.h"
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		c = 1;
	}	
	else
	{
		c = 0;
	}
	return (c);
}
