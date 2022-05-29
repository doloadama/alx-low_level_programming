#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: a pointer to the start of a linked list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
listint_t *boucle, *repet;

boucle = repet = head;

while (boucle && repet && repet->next)
{
boucle = boucle ->next;
repet = repet->next->next;
if (boucle == repet)
{
boucle = head;
break;
}
}

if (!boucle || !repet || !repet->next)
return (NULL);
while (boucle != repet)
{
boucle = boucle->next;
repet = repet->next;
}
return (repet);
}
