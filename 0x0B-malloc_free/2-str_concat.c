#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * str_concat - function that concatenates two strings
 * @s1: 
 * @s2:
 *
 * Return: NULL on failure or a pointer to a newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
int a, b;
char *con;
while (s1[a] != '\0')
{
a++;
}
while (s2[b] != '\0')
{
b++;
} 
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
con = (char *) malloc(((a + b) + 1) * sizeof(char));
for (a = 0; s1[a] != '\0'; a++)
{
con[a] = s1[a];
}
for (b = 0; s2[b] != '\0'; b++)
{
con[a] = s1[b];
a++;
}
return (con);
}
