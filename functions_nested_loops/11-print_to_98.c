#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	int i;

	if (n == 98)
		printf("%d\n", n);
	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", n);
		}
		printf("98\n");
	}
	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d, ", i);
		}
		printf("98\n");
	}
}
