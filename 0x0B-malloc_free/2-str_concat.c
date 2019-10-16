#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* str_concat - concat 2 strings
* @s1: pointer to string
* @s2: pointer to string
* Return: pointer
*/
char *str_concat(char *s1, char *s2)
{
unsigned int j = 0;
unsigned int k = 0;
unsigned int i = 0;
char *ch;
if (s1 == NULL)
{
s1[0] = '\0';
i = 1;
}
else
{
while (s1[i])
i++;
}
if (s2 == NULL)
{
s1[0] = '\0';
j = 1;
}
else
{
while (s2[j])
j++;
}
ch = malloc((i + j) *sizeof(char) + 1);
if (ch == NULL)
return (NULL);
for (k = 0 ; k < i; k++)
ch[k] = s1[k];
i = i + j;
j = 0;
for (; k < i; k++)
{
ch[k] = s2[j];
j++;
}
return (ch);
if (ch == NULL)
return (NULL);
}
