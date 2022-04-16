#include <stdio.h>
/**
 * main - print the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

int a, b, i, res;

for (i = 0; i <= 50; i++)
{
b = i - 2;
a = i - 1;
res = a + b;
printf("%d,", res);
}
printf("\n");
return (0);
}
