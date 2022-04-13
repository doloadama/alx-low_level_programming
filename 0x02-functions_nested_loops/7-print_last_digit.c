#include "main.h"

/** 
 * print_last_digit - print the last digit of a number
 * @n: The number to be checked
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
int test = n % 10;

if (test < 0)
test *= -1;
_putchar(test + '0');

return (test);
}
