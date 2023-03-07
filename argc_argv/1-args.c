#include <stdio.h>
/**
 * main - program that prints the number of arguments passed into it
 * @argc: length of the argv array
 * @argv: list all the entry
 * Return: 0 if the execution is ok
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
