#include <stdio.h>
/**
 * main - prints the multiples of 3 and 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, tree, five, res;
for (n = 0; n < 1024; n++)
{
if (n % 3 == 0)
{
tree += n;
}
if (n % 5 == 0)
{
five += n;
}
res += (tree + five);
}
print ("%d", res);
}
