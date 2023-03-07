#include <stdio.h>
/**
 * main - print the name of the program
 * @argc: length of the argv array
 * @argv: list all the entry
 * Return: 0 if the execution is ok
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
