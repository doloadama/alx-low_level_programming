#include "main.h"

/**
 * _islower - check if a caracter is lowercase
 * @c: the character to be checked
 * Return : 1 if charachter is lowercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
