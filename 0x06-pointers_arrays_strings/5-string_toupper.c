#include "main.h"

/**
 * string_toupper - functions that changes lowercase to uppercase
 * @str: string
 * Return: char
 */

char *string_toupper(char *str)
{
int i;
i = 0;
while(*(str + i))
{
if (*(str + i) >= 'a' && (*str + i) <= 'z')
*(str + i) -= 'a' - 'A';
i++;
}
return (str);
}
