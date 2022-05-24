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
listint_t *temp, *suivant;
temp = head;

while(temp != NULL)
{
suivant = temp->next;
free(temp->n);
free(temp);
temp = suivant;
}
}
