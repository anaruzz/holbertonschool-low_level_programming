#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/*
 * node_handler - handle node
 * @new : new node to add
 * @index: index of node to be added
*/
int node_handler(hash_table_t *ht, hash_node_t *new, unsigned int index)
{
hash_node_t *tmp;

if (ht->array[index] != NULL)
{
tmp = ht->array[index];
while (tmp)
{
if (strcmp(tmp->key, new->key) == 0)
break;
tmp = tmp->next;
}
if (tmp == NULL)
{
new->next = ht->array[index];
ht->array[index] = new;
return (1);
}
else
{
free(tmp->value);
free(tmp->key);
free(new->value);
free(new->key);
free(new);
return (0);
}
}
else
{
ht->array[index] = new;
new->next = NULL;
return (1);
}
return (0);
}



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
int ret;

if (!key || strcmp(key, "") == 0 || !ht || !value)
return (0);

new = malloc(sizeof(hash_node_t *));
if (!new)
return (0);

index = key_index((unsigned char *)key, size);

new->value = strdup(value);
new->key = strdup(key);
new->next = NULL;

ret = node_handler(ht, new, index);

return (ret);
}
