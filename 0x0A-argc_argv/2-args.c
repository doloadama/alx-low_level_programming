#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: the counter
 * @argv: the array of strings 
 * Return: 0
 */

int main(int argc, char *argv[])
{
int i;
for (i = 1; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}

