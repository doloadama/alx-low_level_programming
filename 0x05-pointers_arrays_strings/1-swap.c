#include "main.h"

/**
 * swap_int - Swap the value of two integers
 * @a: a pointer and a parameter of the function
 * @b: a pointer and a parameter of the function
 */

void swap_nt(int *a, int *b)
{
**a = &b;
**b = &a;
}
