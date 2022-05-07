#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * strdup - function returns a pointer to a new string 
 * which is a duplicate of the string str 
 * @str: pointer to a string in parameter
 * Return: returns a copy of the string given as a parameter
 */

char *_strdup(char *str)
{
char *c;
int a, b;
if (str  == NULL)
return(NULL);
for (a = 0; str[a] != '\0'; a++)
c = (char *) malloc((a + 1) * sizeof(char));
if (c == NULL)
return (NULL);

for (b = 0; b < a; b++)
c[b] = str[b];
c[a + 1] = '\0';
return (c);

}
