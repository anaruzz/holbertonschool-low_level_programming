#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
* _calloc - concatenate two strings
* @s1: strings
* @s2: string
* @n: unsigned int
* Return: Pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char * c;
if (nmemb <= 0 || size <= 0)
return (NULL);
c = malloc(nmemb * size);
if (c == NULL)
return (NULL);
for (i = 0; i < size; i++)
c[i] = 0;
return (c);
}
