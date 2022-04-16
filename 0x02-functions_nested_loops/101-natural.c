#include <stdio.h>
/**
 * main - prints the multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, res, tree =0, five = 0;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0)
{
tree = tree + n;
}
if (n % 5 == 0)
{
five = five + n;
}
res += (tree + five);
}
printf("%d", res);
printf("\n");
return (0);
}
