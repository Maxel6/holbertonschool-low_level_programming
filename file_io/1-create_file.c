#include "main.h"

int create_file(const char *filename, char *text_content)
{
    int file;
    if (!filename)
        return (-1);
    if (!text_content)
        text_content = "";

    file = open(filename, O_CREAT | O_WRONLY | O_TRUNC);
    if (file == -1)
        return (-1);

    write(file, text_content, strlen(text_content));
    close(file);
    return (1);
}
