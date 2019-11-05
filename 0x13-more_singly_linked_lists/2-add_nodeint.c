#include "lists.h"
#include <stdlib.h>

/**
* add_nodeint - add node at the beginning of a list
* @head: listint_t
* @n: integer
* Return: adress
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

return (node);
}
