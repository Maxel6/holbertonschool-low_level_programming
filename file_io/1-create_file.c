#include "main.h"
/**
 * create_file - create or open a file to write it
 * @filename: the name of the file to open or create
 * @text_content: the text to write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file;

	if (!filename)
		return (-1);
	if (!text_content)
		text_content = "";

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	write(file, text_content, strlen(text_content));
	close(file);
	return (1);
}
