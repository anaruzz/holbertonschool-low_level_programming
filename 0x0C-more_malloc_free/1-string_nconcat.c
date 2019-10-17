#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
* string_nconcat - concatenate two strings
* @s1: strings
* @s2: string
* @n: unsigned int
* Return: Pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int sizes1 = 0;
unsigned int size2 = 0;
unsigned int i = 0;
char *r;

if (s1 != NULL)
{
while (s1[sizes1] != '\0')
sizes1++;
}

if (s2 != NULL)
{
while (s2[size2] != '\0')
size2++;
}

if (n > size2)
n = size2;
else
size2 = n;

r = malloc(sizeof(char) * (sizes1 + size2 + 1));
if (r == NULL)
return (NULL);

for (i = 0; i < sizes1; i++)
r[i] = s1[i];

for (i = 0; i < size2; i++)
r[i + sizes1] = s2[i];
r[sizes1 + size2] = '\0';

return (r);
}
