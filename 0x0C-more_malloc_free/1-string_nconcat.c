#include "holberton.h"
#include <stdlib.h>
/**
* string_nconcat - concatenate two strings
* @s1: strings
* @s2: string
* @n: unsigned int
* Return: Pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int i = 0, k = 0, j = 0;
char *ch;
if (s1 == NULL)
{
s1[0] = '\0';
i = 1;
}
else
{
while (s1[i] != '\0')
i++;
}
if (s2 == NULL)
s2[0] = '\0';
else
{
while (s2[j] != '\0')
j++;
ch = malloc(sizeof(char) * (i + j) +1);
if (ch == NULL)
return (NULL);
if (n > j)
n = j;
else
j = n;
}
i = 0;
while (s1[i] != '\0')
{
ch[i] = s1[i];
i++;
}
j = 0;
while (k < n)
{
ch[k + i] = s2[k];
k++;
}
return (ch);
}
