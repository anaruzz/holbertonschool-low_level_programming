#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_get - add an element to the hash table
* @ht: hash table
* @key: the string to add
* Return: int
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
unsigned long int index = key_index((unsigned char *)key, ht->size);
char *key_copy;
hash_node_t *tmp;

if (!index || !ht)
return (NULL);

key_copy = strdup(key);
tmp = ht->array[index];
while(tmp)
{
  if(strcmp(tmp->key, key_copy) == 0)
  break;
  tmp = tmp->next;
}
free(key_copy);

if (tmp == NULL)
return (NULL);
return (tmp->value);
}
