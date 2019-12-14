#include "lists.h"
#include <stdio.h>

/**
* get_dnodeint_at_index - get node at index
* @head : head of list
* @index: index of node
* Return: void
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

if (head == NULL)
return (NULL);

while (head != NULL && i < index)
{
head = head->next;
i++;
}
if (i == index)
return (head);
else
return (NULL);
}
