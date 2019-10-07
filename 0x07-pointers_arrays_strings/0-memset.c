#include "holberton.h"
#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * @s: the memory area
 * @b: the constant to print
 * @n: the num of bytes to fill
 * Return: s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 1; i < n; i++)
{
s[i] = b;
}
return (s);
}
