#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the start of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
unsigned int i;
const list_t *a;
a = h;
list_t.str = malloc(sizeof(list_t));
for (i = 0; a; i++)
{
if (str == NULL)
{
printf("[0] (nil)");
}
printf("[%u] %s\n", a->len, a->str);
a = a->next;
}
return (i);
}

