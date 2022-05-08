#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates two arguments of your program
 * @ac: the arguments
 * @av: pointer to the arguments
 * Return: a pointer to a new string or Null if it fails
 * Each argument should be followed by a \n in the new string
 */

char *argstostr(int ac, char **av)
{
int size, c, c1, c2 = 0;
char *src;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (c = 0; c < ac; c++)
{
for (c1 = 0; av[c][c1] != '\0'; c1++)
{
size += 1;
}
size += 1;
src = malloc(sizeof(char) * size);
}
size += 1;
if (src == NULL)
{
free(src);
return (NULL);
}
for (c = 0; c < ac; c++)
{
for (c1 = 0; av[c][c1] != '\0'; c1++)
{
src[c2] = av[c][c1];
c2++;
}
src[c2] = '\n';
c2++;
}
src[c2] = '\0';
return (src);
} 
