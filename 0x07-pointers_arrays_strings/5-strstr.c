#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
int i, j, v = 0;
for (i = 0; haystack[i]; i++)
{
if needle[0] == haystack[i])
{
v = i;
for (j = 0; needle[j] && haystack[i]; j++)
{
if (needle[j] != haystack[v])
{
v = 0;
break;
}
else
v++;
}
}
if (v != 0)
return (&(haystack[i]));
}
return (0);
}
