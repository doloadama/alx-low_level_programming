#include "main.h"

/**
 * string_toupper - functions that changes lowercase to uppercase
 */

char *string_toupper(char *str)
{
int i;

for(i = 0; str[i] != '\0'; i++)
{
if (str[i] >= 'a' && str[i] <= 'z')
{
_putchar('Z' + str[i])
}
}
return (str);
}
