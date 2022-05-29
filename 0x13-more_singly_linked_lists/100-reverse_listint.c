#include "lists.h"


/**
 * reverse_listint - reverses a linked list
 * @head: a pointer to a pointer pointing to the start
 * Return: the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
listint_t *precedant, *suivant;

if (*head == NULL || head == NULL)
return (NULL);

if ((*head)->next == NULL)
return (*head);

precedant = NULL;

while (*head)

suivant = (*head)->next;
(*head)->next = precedant;
precedant = *head;
*head = suivant;
}

*head = precedant;
return (*head);
}
