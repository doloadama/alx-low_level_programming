#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @c: the string to be encoded
 * Return : c
 */


char *rot13(char *c)
{
int i, j;
char a[] = "ABCDEFGHIJKLM";
char b[] = "NOPQRSTUVWXYZ";
for (i = 0; *(c + i); i++)
{
for (j = 0; j <= 12; j++)
{
if (a[j] == c[i])
c[i] = b[j];
else
c[i] = '\0';
}
}
return (c);
}
