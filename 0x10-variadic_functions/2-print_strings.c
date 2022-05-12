#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return : void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list list;
char *str;
va_start(list, n);

for (i = 0; i < n; i++)
{
str = va_arg(list, char *);
if (str)
printf("%s", str);
else
printf("nill");
if (i < n - 1)
if (separator)
printf("%s", separator);
}
printf("\n");
va_end(list);
}
