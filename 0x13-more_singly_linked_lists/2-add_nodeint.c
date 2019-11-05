#include "lists.h"
 /**
  * add_nodeint - add node at the beginning of a list
  * @head: listint_t
  * @n: integer
  * Return: listint_t
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *node;

node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);

node->n = n;
node->next = *head;
*head = node;

retrun (node);
}
