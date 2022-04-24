#include "main.h"

/**
 * string_toupper - functions that changes lowercase to uppercase
 */

char *string_toupper(char *str)
{
int i;

while(*(str + i))
{
if (*(str + i) >= 'a' && (*str + i) <= 'z')
*(str + i) -= 'a' - 'A';
i++;
}
return (str);
}
