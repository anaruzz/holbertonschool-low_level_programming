#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
*add_nodeint_end - add node at the end of a list
* @head: listint_t
* @n: integer
* Return: listint_t
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *last;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = NULL;

if (*head == NULL)
{
*head = node;
return (node);
}
last = *head;
while (last->next)
last = last->next;

last->next = node;

return (node);
}
