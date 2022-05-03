#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: the counter
 * @argv: the array of strings 
 * Return: 0
 */

int main(int argc, int *argv[])
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}

