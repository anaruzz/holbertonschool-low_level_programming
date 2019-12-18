#include "lists.h"
#include <stdio.h>

/**
* insert_dnodeint_at_index - add a node at the begenning of a doubly linked list
* @h: head
* @n: data
* @idx: index
* Return: number of nodes printed
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new, *temp = *h;
unsigned int i = 0;
new = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!new)
return (NULL);

new->n = n;
if (idx == 0)
add_dnodeint(h, n);

while (i < idx && temp != NULL)
{
  temp = temp->next;
  i++;
}

if (temp->next == NULL)
add_dnodeint_end(h, n);

if (i == idx)
{
new->next = temp->next;
new->prev = temp;
}
else
return (NULL);

return (temp);
}
