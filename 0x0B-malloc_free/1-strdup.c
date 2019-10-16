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

unsigned int i, j;
char *t;
if (str == NULL)
return (NULL);

i = 0;
while (str[i])
i++;

t = malloc(sizeof(char) * i + 1);
if (t == NULL)
return (NULL);

for (j = 0 ; j < i; j++)
t[j] = str[j];
t[j + 1] = '\0';
return (t);


}
