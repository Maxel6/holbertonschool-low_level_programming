#include "main.h"
void close_ex(int fd)
{
    int flag = close(fd);
    if (flag == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't close fd %i", flag);
		exit(100);
    }
}

/**
 * main - copie the content of a file to another file
 * @av: arguments of the program
 * @ac: number of arguments
 * Return: always 0
 */
int main(int ac, char **av)
{
	int src, dest, size = 0;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(av[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dest = open(av[2], O_CREAT | O_RDWR | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	while ((size = read(src, buffer, 1024)) > 0)
	{
		write(dest, buffer, size);
	}

    close_ex(src);
    close_ex(dest);

	return (0);
}
