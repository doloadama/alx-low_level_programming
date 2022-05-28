#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list -  frees a list_t list
 * @head: a pointer to the head of node
 * Return: nothing
 */

void free_list(list_t *head)
{

if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
