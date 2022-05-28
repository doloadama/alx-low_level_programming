#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - sum all the data (n) of a listint_t linked list
 * @head: a pointer to the start of the list
 * Return: the sum of the data
 */

int sum_listint(listint_t *head)
{

int sum = 0;

if (head == NULL)
{
return (0);
}

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
