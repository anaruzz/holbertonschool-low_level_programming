#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
* free_listint2 - free a linked list
* @head: listint_t
* Return: void
*/
void free_listint2(listint_t **head)
{
listint_t *temp;


while (*head != NULL)
{
temp = *head;
*head = temp->next;
free(temp);
}
*head = NULL;
}
