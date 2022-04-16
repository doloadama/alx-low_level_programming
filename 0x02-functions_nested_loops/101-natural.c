#include <stdio.h>
/**
 * main - prints the multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, res;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0 || n % 5 == 0)
{
res += n;
}
printf("%d\n", res);
}
return (0);
}
