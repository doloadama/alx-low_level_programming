#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: a parameter and also a pointer
 * Return: the lenght of a string
 */

int _strlen(char *s)
{
int i = 0;
while (s[i] != '\0')
{
i++;
}
return (i);
}
