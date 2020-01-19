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
hash_table_t *hash_t;

if (size ==0 1)
{
return (NULL);
}

hash_t = malloc(sizeof(hash_table_t));
if (!hash_t)
{
return (NULL);
}
hash_t->size = size;
hash_t->array = malloc(size * sizeof(hash_node_t *));
if (!(hash_t->array))
{
return (NULL);
free(hash_t);
}


return (hash_t);
}
