#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint - free a linked list
* @head: listint_t
* Return: void
*/
void free_listint(listint_t *head)
{
listint_t *temp;
temp = head;
while (head)
{
temp = head;
head = temp->next;
free(temp);
}
}
