#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int size = ht->size, i;
hash_node_t *tmp;

if (ht == NULL)
return;

  for (i = 0; i < size; ++i)
  {
  if (ht->array[i] != NULL)
  {
    tmp = ht->array[i];
    while(tmp)
    {
      tmp = tmp->next;
free(tmp->value);
free(tmp->key);
free(tmp);
ht->array[i] = tmp;
  }
  free(ht->array[i]);
  }
  }
  free(ht->array);
  free(ht);
}
