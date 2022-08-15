#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * add_dnodeint_end - adds a new node node at the end of a DLL
 * @head: head of the DLL
 * @n: an integer
 * Return: a list
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_mem, *last;

new_mem = malloc(sizeof(dlistint_t));

if (new_mem == NULL)
return (NULL);

new_mem->n = n;
new_mem->next = NULL;
new_mem->prev = NULL;

if (*head == NULL)
{
*head = new_mem;
return (new_mem);
}

last = *head;

while (last->next != NULL)
last = last->next;
last->next = new_mem;
new_mem->prev = last;
return (new_mem);
}
