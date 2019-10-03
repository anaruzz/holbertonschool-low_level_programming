#include "holberton.h"
/**
 * _strcat - concatenate a string
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: pointer
 */
char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i]; i++)
;
for (j = 0 ; src[j]; j++)
{
dest[i+j] = src[j];
}
return (dest);
}
