#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_print - print a hash table
* @ht: hash table
* Return: No return
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned int size = ht->size, i;
hash_node_t *tmp;
int flag = 0;

if (!ht || !(ht->array))
return;

printf("{");
for (i = 0; i < size; i++)
{
tmp = ht->array[i];
if (tmp != NULL)
{
if (flag != 0)
printf(", ");
printf("'%s': '%s'", tmp->key, tmp->value);
flag = 1;
}
}
printf("}\n");
}
