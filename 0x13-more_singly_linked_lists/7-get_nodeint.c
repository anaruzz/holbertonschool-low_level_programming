#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* get_nodeint_at_index - get node at index
* @head: listint_t
* @index: nth node to return
* Return: element chosen
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i;

if (head == NULL)
return (NULL);

i = 0;
while(head && i < index)
{
head = head->next;
i++;
}

if (i != index)
return (NULL);
else
return (head);
}
