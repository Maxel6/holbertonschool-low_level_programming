#include "3-calc.h"
int main(int argc ,char **argv)
{
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int res = 0;

	if (argc != 4)
		exit(98);
	if (b == 0 && (*argv[2] == '%' || *argv[2] == '/'))
	{
		exit(100);
	}
	int (*p)(int, int) = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("99");
		exit(99);
	}
	res = p(a, b);
	printf("%d\n", res);
	return (0);
}
