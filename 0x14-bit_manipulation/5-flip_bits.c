#include "main.h"

/**
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @n: the first number
 * @m: the second number
 * Return: unsigned int
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

unsigned long int odd, ver;

ver = 0;
odd = n ^ m;

while (odd)
{
if (odd & 1)
ver ++;
ver >>= 1;
}
return (nb);
}
