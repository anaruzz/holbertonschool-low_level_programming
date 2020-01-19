#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_delete - delete ahashtable.
 *@ht: hashtable
 * Return: Void.
 */
void hash_table_delete(hash_table_t *ht)
{
unsigned int i;
hash_node_t *tmp;

if (ht == NULL)
return;


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
