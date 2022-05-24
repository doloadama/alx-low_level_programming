#include "lists.h"
#include <stdio.h>


/**
 * free_listint2 - frees a listint_t list
 * @head: a pointer to a pointer 
 * Return: nothing
 */


void free_listint2(listint_t **head)
{
listint_int *suivant;

while(*head != NULL)
{
suivant = (*head)->next
free(*head);
*head = suivant;
}
*head = NULL;
} 
 
