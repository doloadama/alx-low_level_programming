#include "main.h"

/**
 * int _abs - check the value of an integer
 * print the absolute value of that integer
 */

int _abs(int n)
{
int result;
 
if (n < 0)
{
result = n * (-1);
_putchar(result);
else
_putchar(n);
}
}
