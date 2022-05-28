#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index -  inserts a new node at a given position
 * @head: a pointer to the start of the list
 * @idx: index of the list where the new 
 * node should be added. Index starts at 0
 * @n: the data contained int the node
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

unsigned int i = 1;
listint_t *index = *head;
listint_t *ajout;
listint_t *h = *head;

if (head == NULL)
{
return (NULL);
}

while (i < idx)
{
index = (*head)->next;
*head = index;
++i;
}

ajout = malloc(sizeof(listint_t));

if (ajout == NULL)
return (NULL);

ajout->n = n;

if (idx == 0)
{
ajout->next = *head;
*head = ajout;
}
else
{
ajout->next = (*head)->next;
(*head)->next = ajout;
*head = h;
}
return (ajout);
}
