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
int last_digit;
last_digit = n % 10;
if (last_digit < 6 && last_digit != 0)
printf("Last digit of %d is lessthan 6 and not 0", n);
else if (last_digit > 5)
printf("Last digit of %d is greater than 5", n);
return (0);
}
