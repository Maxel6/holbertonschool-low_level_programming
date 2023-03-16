#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of your program
 *
 */

char *argstostr(int ac, char **av)
{	char *dest = NULL;
	int avsize = 0;
	int len = 0;
	int i = 0;
	int j;

	if (ac == 0 || av == 0)
		return (NULL);
	while (i < ac)
	{
		while (av[i][avsize] != '\0')
			avsize++;
		len += avsize;
		avsize = 0;
		i++;
	}
		dest = malloc(sizeof(char) * (avsize + ac));
		if (dest == 0)
			return (0);

		for (i = 0; i < ac; i++)
		{
			for (avsize = 0; av[i][avsize]; avsize++, j++)
			{
				dest[j] = av[i][avsize];
			}
			dest[j] = '\n';
			j++;
		}
		return (dest);
}
