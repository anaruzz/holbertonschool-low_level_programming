#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
* _calloc - concatenate two strings
* @nmemb: strings
* @size: int
* Return: Pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
unsigned int i;
char *c;
if (nmemb <= 0 || size <= 0)
return (NULL);
c = malloc(nmemb * size);
if (c == NULL)
return (NULL);
for (i = 0; i < size * nmemb; i++)
c[i] = 0;
return (c);
}
