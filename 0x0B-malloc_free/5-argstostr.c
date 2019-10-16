#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* argstostr - concat 2 strings
* @ac: pointer to string
* @av: pointer to string
* Return: pointer
*/
char *argstostr(int ac, char **av)
{
char *ch;
int i, j, k, s = 0;

if (ac == 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
s++;
}
ch = malloc(sizeof(char) * s + 1 + ac);
if (ch == NULL)
return (NULL);

k = 0;
for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j] != '\0'; j++)
{
ch[k] = av[i][j];
k++;
}
ch[k] = '\n';
k++;
}
return (ch);
}
