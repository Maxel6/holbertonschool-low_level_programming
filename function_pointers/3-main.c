#include "3-calc.h"
int main(int argc, char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int res = 0;
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);	
	}
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
