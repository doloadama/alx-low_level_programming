#include "main.h"

/**
 * _strcmp - functions that compare two string
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: an integer
 */

int _strcmp(char *s1, char *s2)
{

int *i = s1;
int *j = s2;
while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
{
i++;
j++;
}
test = (s1[i] - s2[j]);
return (test);
}
