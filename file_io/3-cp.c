#include "main.h"

int main(int ac, char **av)
{
    int src, dest, size;
    char buffer[1024];

    if (ac != 3)
        {
            dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		    exit(97);
        }
    src = open(av[1], O_RDONLY);
    size = read (src, buffer, 1024);
    if (src == -1 || size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
    printf("buffer = %s\n", buffer);
    dest = open(av[2], O_CREAT | O_RDWR | O_TRUNC);
    if (dest == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
        exit (99);
    }

    write(dest, buffer, strlen(buffer));

    close(src);
    close(dest);

    return 0; 
}
