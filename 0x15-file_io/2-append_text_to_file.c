#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to be added to the end of the file.
 *
 * Return: On success, the function returns 1. On failure, it returns -1.
 *Failure scenarios include a NULL filename or
 *the inability to open or write to the file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int file_descriptor, bytes_written, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
file_descriptor = open(filename, O_WRONLY | O_APPEND);
if (file_descriptor == -1)
return (-1);
bytes_written = write(file_descriptor, text_content, len);
if (bytes_written == -1)
{
close(file_descriptor);
return (-1);
}
close(file_descriptor);
return (1);
}
