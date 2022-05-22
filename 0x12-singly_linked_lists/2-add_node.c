#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the address of a node head
 * @str: the data cotained in the node
 * Return: the address of the new element 
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;

if (str == NULL)
return (NULL);

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);
if(new->str == NULL)
{
free(new);
return(NULL);
}
new->len = _strlen(new->str);
new->next = *head;
*head = new;
return (new);
}
