#include "lists.h"
#include <stdio.h>

/**
* sum_dlistint - sum
* @head : head of list
* Return: void
*/
int sum_dlistint(dlistint_t *head)
{
int i = 0;


if (head == NULL)
return (0);

while (head != NULL)
{
i += head->n;
head = head->next;
}
return (i);
}
