#include "lists.h"
#include <stdlib.h>

/**
 * listint_len - returns the number of elements in a linked list
 * @h: a pointer
 * Return: the number of elements of a list
 */


size_t listint_len(const listint_t *h)
{
int i;

for (i = 0; h; i++)
{
h = h->next;
}
return (i);
}
