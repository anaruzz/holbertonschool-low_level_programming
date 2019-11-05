#include <stdio.h>
#include "lists.h"
/**
* listint_len - print all the elements of a list
* @h: listint_t
* Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
int i = 0;
while (h)
{
h = h->next;
i++;
}
return (i);
}
