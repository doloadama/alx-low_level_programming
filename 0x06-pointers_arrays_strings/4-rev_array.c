#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integers
 * @a: the pointer of the array
 * @n: the number of elements of the array
 * Return: the reversed array of integers
 */

void reverse_array(int *a, int n)
{
int i = n - 1;
int j = 0;
int *tmp = a;
int rev[];
while (i > 0)
{
tmp = a[i];
rev[j] = tmp;
i--;
j++;
}
return (rev)
}
