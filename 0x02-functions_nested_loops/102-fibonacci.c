#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

long count, i, j, k;

for (i = 0; i <= 50; i++)
{
k = i +j;
i = j;
j = k;
printf("%d", k);
if (count == 49)
putchar('\n');
else
{
printf(", ");
}
}  
return (0);
}
