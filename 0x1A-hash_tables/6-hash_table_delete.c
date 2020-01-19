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
unsigned int i;
hash_node_t *tmp;

if (ht == NULL)
return;

if (ht)
{
for (i = 0; i < ht->size; i++)
{
if (ht->array[i])
{
tmp = ht->array[i];
while (tmp)
{
ht->array[i] = ht->array[i]->next;
free(tmp->key);
free(tmp->value);
free(tmp);
tmp = ht->array[i];
}
}
}
free(ht->array);
free(ht);
}
}
