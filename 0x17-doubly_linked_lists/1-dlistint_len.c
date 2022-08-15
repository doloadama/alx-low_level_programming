#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * dlistint_len - Counts the number of elements in a doubly linked list.
 * @h: the doubly linked list.
 * Return: the number of elements in the DDL.
 */

size_t dlistint_len(const dlistint_t *h)
{
int longueur = 0;

while (h != NULL)
{
++longueur;
h = h->next;
}

return (longueur);
}
