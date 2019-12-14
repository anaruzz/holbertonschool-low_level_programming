#include "lists.h"
#include <stdio.h>

/**
* dlistint_len - length of a doubly linked list
* h: head
* Return: number of nodes printed
*/
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;
if (!h)
{
  return (0);
}

while (h != NULL)
{
  count++;
  h = h->next;
}
return (count);
}
