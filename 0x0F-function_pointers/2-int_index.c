#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: the array 
 * @size: size of the array
 * @cmp: pointer to the function to be used to compare values
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int i, j;

if (size > 0 && array && cmp)
{
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r)
break;
}
if (i < size)
return (i);
}
return (-1);
}
