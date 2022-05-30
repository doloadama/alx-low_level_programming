#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: number of letters it should read and print
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

int fd;

int ln = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC);

if (fd == -1)
return (-1);

if (text_content != NULL)
ln = write(fd, text_content, strlen(text_content));
close(fd);
if (ln == -1)
return (-1);
return (1);
}
