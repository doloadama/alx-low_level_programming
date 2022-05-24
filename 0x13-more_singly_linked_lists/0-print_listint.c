#include "lists.h"
#include <stdio.h>
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: a pointer to the start of the list
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
listint_t *temp;
size_t i = 0;
temp = h;
while (temp != NULL)
{
printf("%d\n", temp->n);
temp = temp->next;
i++;
}
return (i);
}
