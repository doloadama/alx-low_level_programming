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

if (str == NULL) /* the string is null */
return (NULL);

new = malloc(sizeof(list_t)); /* allocate a space for the node */

if (new == NULL)
return (NULL);  /* the node is empty */

new->str = strdup(str);  /* duplicate the string pointed */
if (new->str == NULL) /* the str in the new node is empty */
{
free(new);
return (NULL);
}
new->len = strlen(new->str); /* the lenght of the string */
new->next = *head;
*head = new;
return (new);
}
