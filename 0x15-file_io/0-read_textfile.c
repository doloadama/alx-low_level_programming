#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the filename
 * @letters:  number of letters it should read and print
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
int lr, lv;
char *buffer;

if (filename == NULL)
{
return (0);
}

fd = open(filename, O_RDONLY);

if (fd == -1)
{
return (0);
}

buffer = malloc(sizeof(char) * letters);

if (buffer == NULL)
{
close(fd);
return (0);
}

lr = read(fd, buffer, letters);
close(fd);

if (lr == -1)
{
free(buffer);
return (0);
}

lv = write(STDOUT_FILENO, buffer, lr);
free(buffer);
if (lr != lv)
{
return (0);
}
return (lv);
}
