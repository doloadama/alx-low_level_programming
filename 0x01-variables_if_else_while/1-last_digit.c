#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int lastdigit = 0;
lastdigit = n % 10;
if (lastdigit < 6 && lastdigit != 0)
printf("Last digit of %d is lessthan 6 and not 0", n);
else if (lastdigit > 5)
printf("Last digit of %d is greater than 5", n);
return (0);
}
