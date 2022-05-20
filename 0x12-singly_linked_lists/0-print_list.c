#include "lists"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list
 * @h: a pointer to the start of the list 
 * return the number of nodes
 */

size_t print_list(const list_t *h)
{
int i;

if (str == NULL)
{
printf("[0] (nil)");
}
else
for (i = 0; h; i++)
{
printf("[%u] %s\n", h->len; h->str);
h = h->next;
}
return (i);
}

   
   
