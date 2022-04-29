#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: the number
 * Return: the natural square
 */

int _sqrt_recursion(int n)
{

if ( n == 0)
{
return (0);
}
else if (n < 0)
{
return (-1);
}
return (n * _sqrt_recursion(n + 1));
}
