#include "main.h"
#include <stdio.h>
/**
 * print_rev - Print a string in reverse
 *@s: the parameter
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
void print_rev(char *s)
{
int  leng;
 int i;
int *spec = s;

leng = _strlen(s[]);
 for (i = leng -1; i >=0 ; i--)
   {
     _putchar(s[i]);
   }
 _putchar('\n');
}
