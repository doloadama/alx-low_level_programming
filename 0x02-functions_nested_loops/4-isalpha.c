#include "main.h"
/** 
 * _isalpha - Checks if the caracter is alpha
 * @c: the character to be checked
 * Return: 1 if c is a letter or 0 otherwise
 */

int _isalphe(int c)
{
if ((c >= 'a' && c <= 'z') ||
(c >= 'A' && c <= 'Z'))
return (1);
else
return (0);
}
