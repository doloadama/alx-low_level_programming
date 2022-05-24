#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the pointer to the start of the list
 * @n: an integer
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

listint_t *new;

if (head == NULL)
return (NULL);

new = malloc(sizeof(listint_t));
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}

new->n = n;
while (new != NULL)
new = new->next
   
