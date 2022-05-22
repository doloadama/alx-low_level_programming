#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: a pointer to the head
 * @str: the string to duplicate
 * Return: the address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{

list_t *new, *temp;
  
new = malloc(sizeof(list_t));
if (str == NULL)
return (NULL);
if (new == NULL)
return (NULL);
new->str = strdup(str);
if (new->str == NULL)
{
free(new);
return (NULL);  
}
new->len = strlen(new->str);
new->next = NULL;
return (new);
if (*head == NULL)
*head = new;
return (new);

temp = *head;
while (temp->next)
temp = temp->next;
temp->next = new;
return (new);

 
}

