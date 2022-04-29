#include "main.h"

/**
 * _print_rev_recursion(char *s)
 * @s: the string
 */

void _print_rev_recursion(char *s)
{

if (*s == '\0')
{
_putchar('\n');
return;
}
char *t = s;
char *rev = s;
t = *s;
*s = rev[0];
rev[0] = t;
rev--;
s++;
_print_rev_recursion(rev);
_putchar(*rev);
}
