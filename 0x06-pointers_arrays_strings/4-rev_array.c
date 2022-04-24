#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integers
 * @a: the pointer of the array
 * @n: the number of elements of the array
 * Return: the reversed array of integers
 */

void reverse_array(int *a, int n)
{
int i;
int *start = a;
int *end = a;
int c;
for (i =0; i < n -1; i++)
{
end++;
}
for (i = 0; i < n /2; i++)
{
c = *end_c;
*end = *start;
*start = c;
start++;
end--;
   }
}
