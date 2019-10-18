#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
* _realloc - create array
* @ptr: pointer
* @old_size: unsigned int
* @new_size: unsigned int
* Return: Pointer
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *a, *b;
unsigned int i;
if (new_size == old_size)
return (ptr);
if (ptr != NULL && new_size == 0)
{
free(ptr);
return (NULL);
}
a = malloc(new_size);
if (a == NULL)
return (NULL);
i = 0;
b = ptr;
while (i < old_size)
{
a[i] = b[i];
i++;
}
free(ptr);
return (a);
}
