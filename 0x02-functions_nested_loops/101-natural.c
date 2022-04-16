#include <stdio.h>
/**
 * main - prints the multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, res, tree, five;
for (n = 1; n < 1024; n++)
{
if (n % 3 == 0)
{
tree += n;
}
else if(n % 5 == 5)
{
five += n;
}
}
res = five + tree;
printf("%d", res);
printf("\n");
return (0);
}
