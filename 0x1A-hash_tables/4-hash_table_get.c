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
unsigned long int index = key_index(key, ht->size);
char *return_value = NULL;

if (!index || !ht)
return (return_value);
else
{
return_value = ht->array[index]->value;
return (return_value);
}
}
