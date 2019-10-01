#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i, j;
char a;
for (j = 0; s[j] ; j++)
;
 for (i = 0; i < (j / 2); i++)
{
a = s[i];
s[i] = s[j - i - 1];
s[j - i - 1] = a;
}
}
