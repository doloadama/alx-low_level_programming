#include "lists.h"
#include <stdlib.h>

/**
 * free_list -  frees a list_t list
 * @head: a pointer to the head of node
 * Return: nothing
 */

void free_list(list_t *head)
{

list_t *temp, *suivant;
temp = head;

while(temp != NULL)
{
suivant = temp->next;
free(temp->str);
free(temp);
temp = suivant;
}
}
