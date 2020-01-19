#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
/**
* key_index - function to implement the djb2 algorithù
* @key: value to return its index
* @size: size of hash table
* Return: unsigned long int
*/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int hash_key, c;

if (!key)
return (-1);
hash_key = hash_djb2(key);
c = hash_key % size;
return (c);
}
