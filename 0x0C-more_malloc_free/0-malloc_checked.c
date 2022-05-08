#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory 
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
int *mem;
mem = malloc(b);
if (mem == NULL)
{
exit(98);
}
return (mem);
}
