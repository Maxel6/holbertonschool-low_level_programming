#include "3-calc.h"
/**
 * main- program that prints all arguments it receives.
 * @argc: length of the argv array
 * @argv: list all the entry
 * Return: 0 if the execution is ok
 */
int main(int argc, char **argv)
{
	int a = 0;
	int b = 0;
	int res = 0;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	p = get_op_func(argv[2]);
	if (p == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	res = p(a, b);
	printf("%d\n", res);
	return (0);
}
