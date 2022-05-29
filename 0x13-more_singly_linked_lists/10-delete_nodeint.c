#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: a pointer to the start
 * @index: he index of the node
 * Return: 1 it it succeedded, -1 it it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int i;
listint_t *current, *del;
if (head == NULL || *head == NULL)
return (-1);
if (index == 0)
{
del = (*head)->next;
free(*head);
*head = del;
return (1);
}
current = *head;
for (i = 0; i < index - 1; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}
del = current->next;
current->next = del->next;
free(del);
return (1);
}
