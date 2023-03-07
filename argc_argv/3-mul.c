#include <stdio.h>
#include <stdlib.h>
/**
 * main - program that multiplies two numbers.
 * @argc: length of the argv array
 * @argv: list all the entry
 * Return: 0 if the execution is ok, 1 If don't not receive two arguments
 */
int main(int argc, char *argv[])
{
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}

}
