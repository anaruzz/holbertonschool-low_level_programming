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
unsigned int i;
char *ch;
if (s1 == NULL)
s1[j] = '\0';

for(j = 0; s1[j]; j++)
;


if (s2 == NULL)
s2[k] = '\0';


for(k = 0; s2[k]; k++)
;


ch = malloc(j + k + 1);
if (ch == NULL)
return (NULL);


for (i = 0; i < j; i++)
ch[i] = s1[i];


for (; i < j + k; i++)
ch[i] = s2[i + j];

ch[i + 1] = '\0';

if (ch == NULL)
return (NULL);

return (ch);
}
