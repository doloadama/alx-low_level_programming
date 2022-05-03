#include <stdio.h>
#include <stdlib.h>
/**
 * main - Multiplies two numbers
 * @argc: the counter
 * @argv: the array
 * Return: 0 if true and 1 id error
 */

int main(int argc, char *argv[])
{
int i, multi;
multi = 1;
if (argc < 3)
{
printf("Error\n");
return (1);
}
for (i = 1; i < argc; i++)
{
multi = multi *atoi(argv[i]);
}
printf("%d\n", multi);
return (0);
}
