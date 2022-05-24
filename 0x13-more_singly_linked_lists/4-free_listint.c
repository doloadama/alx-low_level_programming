#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: a pointer to the head 
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{
listint_t *suivant;
while(head != NULL)
{
suivant = head->next;
free(head);
head = suivant;
}
}
