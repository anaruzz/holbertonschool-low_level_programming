#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* insert_nodeint_at_index - get node at index
* @head: listint_t
* @idx: position of the new node to insert
* @n: data inserted
* Return: adress of new node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *temp;
unsigned int i;
node = malloc(sizeof(listint_t));
if (node == NULL)
return (NULL);
node->n = n;
if (idx == 0)
{
node->next = *head;
*head = node;
return (node);
}
if (head == NULL)
{
(*head)->n = node->n;
(*head)->next = NULL;
return (*head);
}
temp = *head;
if (temp == NULL)
return (NULL);
i = 0;
while (temp && i + 1 < idx)
{
temp = temp->next;
i++;
if (temp == NULL)
return (NULL);
}
if (i > idx)
return (NULL);
node->next = temp->next;
temp->next = node;
return (node);
}
