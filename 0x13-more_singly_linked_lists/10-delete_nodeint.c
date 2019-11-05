#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* delete_nodeint_at_index - delete node at index
* @head: listint_t
* @index: position of the new node to insert
* Return: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *temp, *del;
unsigned int i;

if (head == NULL)
return (-1);

if (index == 0)
{
*head = temp->next;
free(temp);
return (1);
}

temp = *head;

i = 0;
while (temp && i + 1 < idx)
{
temp = temp->next;
i++;
if (temp == NULL)
return (NULL);
}

if (i > index)
return (NULL);

del = temp->next;
temp->next = del->next;
return (1);

}
