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

int odd, ver;
int i, nb;
int longueur = sizeof(unsigned long int) * 8;

nb = 0;
ver = 1;
odd = n ^ m;
for (i = 0; i < longueur; i++)
{

if (ver == (odd & ver))
nb++;
ver <<= 1;
}
return (nb);
}
