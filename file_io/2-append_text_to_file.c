#include "main.h"
/**
 * append_text_to_file - append a text at the end of a file
 * @filename: name of the input file
 * @text_content: text to add at file
 * Return: 1 at succes, -1 at fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
    int file;

    if (!filename)
        return (-1);
    if (!text_content)
        return (1);
    
    file = open(filename,O_CREAT | O_WRONLY | O_APPEND, 0600);
    if (file == -1)
        return (-1);

    write(file, text_content, strlen(text_content));
    close(file);
    return (1);
}
