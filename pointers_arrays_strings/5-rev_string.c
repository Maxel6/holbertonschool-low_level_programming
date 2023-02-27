#include "main.h"
#include <stdio.h>
void rev_string(char *s)
{
	int len = _strlen(s);
	int i;
	char temp;
	for (i = 0; i < len/2; i++) {
		temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}

}
