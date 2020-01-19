#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_set - add an element to the hash table
* @ht: hash table
* @key: the string to add
* @value: value associated with the key
* Return: int
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index, size = ht->size;
hash_node_t *new;

if (!key || strlen(key) == 0 || !ht)
return (0);

index = key_index((unsigned char *)key, size);

new = malloc(sizeof(hash_node_t *));
if (!new)
return (0);

new->value = strdup(value);
new->key= strdup(key);
new->next = NULL;

if (ht->array[index])
{
  while(ht->array[index])
  {
    if (strcmp(ht->array[index]->key, key) != 0)
    {
      ht->array[index]->value = strdup(value);
      return (1);
    }
    ht->array[index] = ht->array[index]->next;
  }
  new->next = ht->array[index];
  ht->array[index] = new;
}
else
ht->array[index] = new;
return (1);
}

















// if ((int)index == -1)
// {
//   // ht->array[index] = malloc(sizeof(hash_node_t));
//   // ht->array[index]->key = malloc(len + 1 * sizeof(char));
//   // ht->array[index]->value = malloc(len + 1 * sizeof(char));
//   // ht->array[index]->key = key;
//   // ht->array[index]->value = value;
//   // ht->array[index]->next = NULL
//   // return (1);
// }
// else
// {
// ht->array[index] = malloc(sizeof(hash_node_t));
// ht->array[index]->key = strdup(key);
// ht->array[index]->value = strdup(value);
// ht->array[index]->next = NULL;
// return (1);
// }
//
// return (1);
// }
