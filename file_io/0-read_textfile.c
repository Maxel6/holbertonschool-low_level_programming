#include "main.h"
/**
 * read_textfile - read a text file and prints it to the POSIX standard output
 * @filename: name of the input file
 * @letters: number of chars to print
 * Return: the number of printed char
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, idx = 0;
	char *str;

	if (!filename)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		return (0);
	}
	str = malloc(sizeof(char) * letters + 1);
	if (!str)
	{
		return (0);
	}
	read(file, str, letters);
	str[letters] = '\0';
	while (str[idx])
	{
		write(STDOUT_FILENO, &str[idx], 1);
		idx++;
	}
	close(file);
	return (strlen(str));
}
