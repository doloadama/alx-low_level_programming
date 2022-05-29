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
 * print_listint_safe - prints a listint_t linked list.
 * @head: a pointer to the start of the list
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{

size_t i, nombre = 0;
const listint_t **list = NULL;

while (head != NULL)
{
for (i = 0; i < nombre; i++)
{
if (head == list[i])
{
printf("-> [%p] %d\n", (void *)head, head->n);
free(list);
return (nombre);
}
}

nombre++;
list = add(list, nombre, head);
printf("[%p], %d\n", (void *)head, head->n);
head = head->next;
}

free(list);
return (nombre);
}
