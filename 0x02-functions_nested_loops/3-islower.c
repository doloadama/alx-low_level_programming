#include "main.h"

/**
 * _islower - check if a caracter is lowercase
 * @c: the character to be checked
 * Return: 1 if charachter is lowercase
 * Return: 0 if character is uppercase
 */

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
