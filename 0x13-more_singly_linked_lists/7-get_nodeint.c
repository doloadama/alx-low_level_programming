#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - check a list and return the nth node
 * @head: a pointer to the start of the list
 * @index:  the index of the node
 * Return: the index of the node or NULL if does'nt exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
{
return (NULL);
}

for (i = 0; i < index; i++)
{
if (head == NULL)
{
return (NULL);
}
head = head->next;
}
return (head);
}
