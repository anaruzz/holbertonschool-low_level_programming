#include "lists.h"
#include <stdio.h>

/**
* add_dnodeint - add a node at the begenning of a doubly linked list
* @head: head
* @n: data
* Return: number of nodes printed
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *aux;
aux = (dlistint_t *)malloc(sizeof(dlistint_t));
if (!aux)
return (NULL);

aux->n = n;
aux->prev = NULL;
aux->next = (*head);

if ((*head) != NULL)
(*head)->prev = aux;

*head = aux;

return (*head);
}
