#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory 
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
char *mem;
mem = malloc(98);
if (mem == NULL)
{
exit(98);
}
return (mem);
}
