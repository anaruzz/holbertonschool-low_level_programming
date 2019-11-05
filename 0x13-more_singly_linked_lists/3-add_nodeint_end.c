#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
 /**
  * add_nodeint_end - add node at the beginning of a list
  * @head: listint_t
  * @n: integer
  * Return: listint_t
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t* node;
node = malloc(sizeof(listint_s));
if (n = NULL)
{
return (NULL);
}
while (h)
head = head->next;

node->n = n;
head->n = node->n;
head->next = node->next;

retrun (*head);
}
