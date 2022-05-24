#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - frees a list
 * @head: a pointer to the head 
 * Return: nothing
 *
 */

void free_listint(listint_t *head)
{

while(head != NULL)
{
free(head);
head = head->next;
}
