#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* hash_table_create - function to creato a hash table
* @size: size of table
* Return: hash_table
*/
unsigned long int hash_djb2(const unsigned char *str)
{
unsigned long hash = 5381;
int i, c;

i = 0;
c = 0;
while (str[i])
{
c = str[i];
hash = ((hash << 5) + hash) + c;
i++;
}
return (hash);
}
