#include "holberton.h"
#include <stdio.h>
/**
 * _strchr - locates a charachter in a string
 * @s: the memory area to print in
 * @c: the memory to copy from
 * Return: r
 */
char *_strchr(char *s, char c)
{
int i, l = 0;
 while(s[l])
l++;
for (i = 0; i <= l; i++)
{
if (s[i] == c)
s += i;
return (&(s[i]));
}
if (i < l)
s[i + 1] = '\0';
return (0);
}
