#include <stdio.h>
#include "lists.h"
/**
* print_listint - print all the elements of a list
* @h: listint_t
* Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
int i = 0;
while (h)
{
printf("%d\n", h->n);
h = h->next;
i++;
}
return (i);
}
