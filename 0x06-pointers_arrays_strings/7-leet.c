#include "holberton.h"
/**
 * leet - encode a string
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
int i, j;
char s1[] = {'a', 'e', 'o', 't', 'l'};
char s3[] = {'A', 'E', 'O', 'T', 'L'};
char s2[] = {'4', '3', '0', '7', '1'};
i = 0;
while (s[i])
{
for (j = 0; s2[j]; j++)
{
if (s[i] == s1[j] || s[i] == s3[j])
s[i] = s2[j];
}
i++;
}
return (s);
}
