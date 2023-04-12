#include "main.h"
/**
 * close_fd - close a file directory
 * @fd: the file directory to close
 */
void close_fd(int fd)
{
	int flag = close(fd);

	if (flag == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i", flag);
		exit(100);
	}
}
/**
 * cp_buffer - copy a buffer to a dest file
 * @dest: the destination file
 * @buffer: the sting to copy
 * @size: the number of character to copy, -1 if read fail
 * @av: program argunents
 */
void cp_buffer(int dest, char buffer[1024], int size, char **av)
{
	if (size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	if (write(dest, buffer, size) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
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
	int src, dest, size = 1;
	char buffer[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	src = open(av[1], O_RDONLY, 0664);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while (size != 0)
	{
        size = read(src, buffer, 1024);
		cp_buffer(dest, buffer, size, av);
	}

	close_fd(src);
	close_fd(dest);
	return (0);
}
