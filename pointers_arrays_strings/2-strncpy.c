#include "main.h"

char *_strncpy(char *dest, char *src, int n)
{

	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}