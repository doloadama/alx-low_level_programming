#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the number to check
 * @index: the index of the returned bit
 * Return: the value of the bit at index index or -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
int diviseur, verif;
if (index > (sizeof(unsigned long int) * 8 - 1))
return (-1);

diviseur = 1 << index;
verif = n & diviseur;
if (verif == diviseur)
return (1);
return (0);
}
