#include "main.h"
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the filename
 * @text_content: the text content
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{

int fd;
int ln;
if (filename ==  NULL)
return (-1);

fd = open(filename, ab);

if (fd == -1)
return (-1);

if (text_content != NULL)
ln = write(fd, text_content, strlen(text_content));
close(fd);

if (len == -1)
return (-1);
return (1);
}
