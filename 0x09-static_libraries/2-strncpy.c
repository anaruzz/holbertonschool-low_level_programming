#include "holberton.h"
/**
 * _strncpy - coppies a string
 * @dest: string destination
 * @src: string source
 * @n: integer
 * Return: pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
int i, j;
for (i = 0; src[i]; i++)
;
i--;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
if (j > i)
dest[j] = '\0';
}
return (dest);
}
