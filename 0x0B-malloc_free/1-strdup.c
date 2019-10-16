#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* _strdup - copy a string
* @str: pointer to string
* Return: pointer
*/
char *_strdup(char *str)
{
if (sizeof(str) == 0)
return (NULL);
else
{
unsigned int i ;
i = 0;
while (str[i])
i++;
char *t;
t = malloc(i + 1);
if (t == NULL)
return (NULL);
else
{
unsigned int j;
for (j = 0 ; j < i; j++)
t[j] = str[j];
t[j + 1] = '\0';
return (t);
}
}
}
