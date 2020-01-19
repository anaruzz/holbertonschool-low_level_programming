#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_create - function to creato a hash table
* @size: size of table
* Return: hash_table
*/
hash_table_t *hash_table_create(unsigned long int size)
{
hash_table_t *ht;

if (size < 1)
{
return (NULL);
}

ht = malloc(sizeof(hash_table_t));
if (!hash_t)
{
return (NULL);
}
ht->size = size;
hash_t->array = malloc(size * sizeof(hash_node_t *));
if (!(ht->array))
{
free(ht);
return (NULL);
}


return (ht);
}
