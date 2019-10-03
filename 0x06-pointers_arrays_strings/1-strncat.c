#include "holberton.h"
/**
 * _strncat - concatenate two strings
 * @dest: string destination
 * @src: string source
 * @n: integer
 * Return: pointer
 */
char *_strncat(char *dest, char *src, int n)
{
int i, j, k;
for (i = 0; src[i]; i++)
;
for (j = 0; dest[j]; j++)
;
if (n <= i)
{
for (k = 0 ; k != n; k++)
{
dest[k + j] = src[k];
}
}
else
{
for (k = 0; k != i; k++)
dest[k + j] = src[k];
}
return (dest);
}
