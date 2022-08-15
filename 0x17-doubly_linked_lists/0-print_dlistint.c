#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a double linked list.
 * @h: The double linked lists to prints.
 * Return: the number of node of the DDL.
 */


size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;

while (h != NULL)
{
printf("%i\n", h->n);
h = h->next;
n++;
}
return (n);
}
