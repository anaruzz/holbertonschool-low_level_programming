#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i;
for (i = 0; s[i] ; i++)
;
int j;
char a;
for (j = 0; j < i; j++)
{
a = s[i - 1];
s[i - 1] = s[j];
s[j] = a;
i--;
}
}
