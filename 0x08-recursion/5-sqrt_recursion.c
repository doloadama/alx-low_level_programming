#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square
 */

int _sqrt_recursion(int n)
{

if ( n <= 0)
{
return (-1);
}
return (my_sqrt_recursion(n, 0);
}

/**
 *my_sqrt_recursion - THis is my sqrt recursion
 * @a: the entry
 * @n: the sum
 * Return: the result
 */

int my_sqrt_recursion(int a, int b)
{
if (a == (b * b))
return (b);
else if ((b * b) >= a)
return (-1);
else
return (my_sqrt_recursion(a, b + 1));
}
