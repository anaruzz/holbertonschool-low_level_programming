#include "lists.h"
#include <stdio.h>

/**
* add_dnodeint_end - add a node at the end of a doubly linked list
* @head: head
* @n: data
* Return: number of nodes printed
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *aux = (dlistint_t *)malloc(sizeof(dlistint_t));
dlistint_t *last = *head;

if (!aux)
return (NULL);

aux->n = n;
aux->next = NULL;
aux->prev = NULL;

if (*head == NULL)
{
*head = aux;
return (*head);
}

while (last->next != NULL)
last = last->next;

aux->prev = last;
last->next = aux;

return (aux);
}
