#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
 /**
  * add_nodeint - add node at the beginning of a list
  * @head: listint_t
  * @n: integer
  * Return: listint_t
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t* node;
node = malloc(sizeof(listint_s));
if (node = NULL)
{
return (NULL);
}

node->n = n;
node->next = *head;
*head = n;

retrun (*head);
}
