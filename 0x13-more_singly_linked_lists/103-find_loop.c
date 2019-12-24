#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
listint_t *find_listint_loop(listint_t *head)
{
  listint_t *f = head;
  listint_t *s = head;

  while(f && s && f->next)
  {
    f = (f->next)->next;
    s = s->next;
  }
  if (f == s)
  return (f);
  else
  return (NULL);
}
