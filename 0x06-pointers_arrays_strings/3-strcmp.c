#include "main.h"

/**
 * _strcmp - functions that compare two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{

char *i = s1;
char *j = s2;
while (*i != '\0' && *j != '\0' && *i == *j)
{
i++;
j++;
}
test = (*i - *j);
return (test);
}
