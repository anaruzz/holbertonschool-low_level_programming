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

if (sizeof(s1) == 0)
s1[0] = '\0';

unsigned int j = 0;
while (s1[j])
j++;
if (sizeof(s2) == 0)
s2[0] = '\0';

unsigned int k = 0;
while (s2[k])
k++;

char *ch;
ch = malloc(j + k + 1);
unsigned int i;
for (i = 0; i < j; i++)
ch[i] = s1[i];

int a = 0;
for (; i < j + k; i++)
{
ch[i] = s2[a];
a++;
}
ch[i + 1] = '\0';
return (ch);
if (sizeof(ch) == 0)
return (NULL);
}
