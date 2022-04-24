#include "main.h"

/**
 * leet - function that encodes a string into 1337
 * @str : char to be encoded
 * Return: the encoded string
 */

char *leet(char *str)
{
int i;
int j;
char a[] = "aAeEoOtTlL"
char b[] = "4433007711"

for (i = 0; *(str + i); i++)
{
for (j = 0; j <= 9; j++)
{
if (a[j] == str[i])
str[i] = b[j];
}
}
return (str);
}
