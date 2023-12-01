#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * read_textfile - Read text file and print to STDOUT.
 * @filename: Text file to be read.
 * @letters: Number of letters to be read.
 * Return: Number of bytes read and printed (w),
 *         0 when the function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
if (filename == NULL)
return (0);
int fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
char *buf = malloc(sizeof(char) * letters);
if (buf == NULL)
{
close(fd);
return (0);
}
ssize_t bytesRead = read(fd, buf, letters);
if (bytesRead == -1)
{
free(buf);
close(fd);
return (0);
}
ssize_t bytesWritten = write(STDOUT_FILENO, buf, bytesRead);
free(buf);
close(fd);
if (bytesRead != bytesWritten)
return (0);
return (bytesWritten);
}
