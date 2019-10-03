#include "holberton.h"
/**
 * _strcmp - compare two strings
 * @s1: string
 * @s2: string
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
int i, j, k;
for (i = 0; s1[i]; i++)
;
for (j = 0 ; s2[j]; j++)
;
k = 0;
int c = 0;
 while (k < (i - 1) && c == 0)
{
c = s1[k] - s2[k];
k++;
}
return (c);
}
