0;10;1c0;10;1c#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
  printf(n, "%d is positive\n");
else
  printf(n, "%d is negative\n");
return (0);
}
