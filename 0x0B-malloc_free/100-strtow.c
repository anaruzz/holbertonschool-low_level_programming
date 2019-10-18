#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* strtow - concat 2 strings
* @str: pointer to string
* Return: pointer
*/
char **strtow(char *str)
{
char **t;
int len, i, j, k, s, diff;

if (str == NULL)
return (NULL);

len = 0;
while (str[len] != '\0')
len++;
t = malloc(sizeof(char) * len + 1);
if (t == NULL)
return (NULL);
i = 0;
j = 0;
k = 0;
while (i < len)
{
if (str[i] != ' ')
i++;
else
{
diff = i - j + 1;
t[k] = malloc(sizeof(char) * (diff));
if (t[k] == NULL)
{
free(t[k]);
free(t);
return (NULL);
}
for (s = 0; s < i - j; s++)
t[k][s] = str[s];
k++;
i++;
j = i;
}
}
t[k + 1] = NULL;
return (t);
}
