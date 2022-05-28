#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: a pointer to the start of a list
 * Return: the value of the head
 */

int pop_listint(listint_t **head)
{

listint_t *take;
int valeur = 0;

if (*head == NULL)
{
return (0);
}

take = (*head)->next;
valeur = (*head)->n;
free(*head);
*head = take;
return (valeur);
}
