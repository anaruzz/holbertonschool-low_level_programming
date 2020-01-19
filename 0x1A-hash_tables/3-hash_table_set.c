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
hash_node_t *new, *current;

if (!key || strlen(key) == 0 || !ht || !value)
return (0);

index = key_index((unsigned char *)key, size);

new = malloc(sizeof(hash_node_t *));
if (!new)
return (0);

new->value = strdup(value);
new->key = strdup(key);
new->next = NULL;

if (ht->array[index] != NULL)
{
current = ht->array[index];
while (current)
{
if (!strcmp(current->key, key))
{
current->value = strdup(value);
return (1);
}
current = current->next;
}
new->next = ht->array[index];
ht->array[index] = new;
}
else
ht->array[index] = new;

return (1);
}
