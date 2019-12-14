#include "lists.h"
#include <stdio.h>

/**
* free_dlistint - free a list
* @head : head of list
* Return: void
*/
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp = head, *next;

while (temp != NULL)
{
next = temp->next;
free(temp);
temp = next;
}
head = NULL;
}
