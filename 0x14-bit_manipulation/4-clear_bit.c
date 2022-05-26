#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number
 * @index: the index
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{

int met;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);
met = 1 << index;
*n = *n & met;
return (1);
}
