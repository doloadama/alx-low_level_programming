#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: the size of the memory 
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
char *mem;
if (mem == NULL)
{
exit(98);
}
mem = malloc(sizeof(int) * b);
return (mem);
}
