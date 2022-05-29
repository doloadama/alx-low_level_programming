#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add - add a memory space for an array of pointers
 * @list: the old list
 * @size: size of the new list
 * @new: new node to add to the list
 * Return: pointer to the new list
 */

const listint_t **add(const listint_t **list, size_t size,
const listint_t *new)
{
const listint_t **nouvelle;
size_t i;

nouvelle = malloc(size * sizeof(listint_t *));

if (nouvelle == NULL)
{
free(list);
exit(98);
}
for (i = 0; i < size - 1; i++)
nouvelle[i] = list[i];
nouvelle[i] = new;
free(list);
return (nouvelle);
}

/**
 * free_listint_safe - frees a listint_t linked list.
 * @head: double pointer to the start of the list
 *
 * Return: the number of nodes in the list
 */

size_t free_listint_safe(listint_t **head)
{
size_t i, num = 0;
listint_t **list = NULL;
listint_t *next;

if (head == NULL || *head == NULL)
return (num);
while (*head != NULL)
{
for (i = 0; i < num; i++)
{
if (*head == list[i])
{
*head = NULL;
free(list);
return (num);
}
}
num++;
list = _ra(list, num, *head);
next = (*head)->next;
free(*head);
*head = next;
}
free(list);
return (num);
}
