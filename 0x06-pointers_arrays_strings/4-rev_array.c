#include "main.h"

/**
 * reverse_array - function that reverses the content of an array integers
 * @a: the pointer of the array
 * @n: the number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
int i, c;
int *start;
int *end;
start = a;
end = a;
for (i = 0; i < n - 1; i++)
{
end++;
}
for (i = 0; i < n / 2; i++)
{
c = *end;
*end = *start;
*start = c;
start++;
end--;
}
}
