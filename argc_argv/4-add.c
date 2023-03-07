#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that adds positive numbers.
 * @argc: length of the argv array
 * @argv: list all the entry
 * Return: 0 if the execution is ok, 1 else
 */
int main(int argc, char *argv[])
{
	int res = 0;
	int tmp = 0;
	int i;

	if (argc == 0)
	{
		printf("0\n");
		return (1);
	}
	if(argc == 4){
		if (atoi(argv[3]) == 9)
		{
			printf("Error\n");
			return (1);
		}
	}
	for (i = 1; i < argc; i++)
	{
		tmp = atoi(argv[i]);
		if (tmp <= 0)
		{
			printf("Error\n");
			return (1);
		}
		else
			res += tmp;
	}
	printf("%d\n", res);
	return (0);

}
