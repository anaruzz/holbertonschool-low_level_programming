#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* pop_listint - free a linked list
* @head: listint_t
* Return: data of element deleted
*/
int pop_listint(listint_t **head)
{
listint_t *temp;
int i;

if (*head == NULL)
return (0);

temp = *head;
i = temp->n;
*head = (*head)->next;
free(temp);

return (i);
}
