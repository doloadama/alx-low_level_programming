#include "lists.h"

/**
 * list_len -  returns the number of elements in a linked list_t list
 * @h: a pointer to the head node
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{

const list_t *head;
unsigned int i;
head = h;
for (i = 0; head; i++)
{
head = head->next;
}
return (i);
}
