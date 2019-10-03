#include "holberton.h"
#include <unistd.h>
/**
 * cap_string - capitalize all words
 * @c: string
 * Return: pointer
 */
char *cap_string(char *c)
{
int i = 0, j;
while (c[i])
i++;
if (c[0] >= 'a' && c[0] <= 'z')
c[0] = c[0] - 32;
j = 0;
while (j <= i)
{
if (c[j - 1] == ' ' || c[j - 1] == '\n' || c[j - 1] == '\t' || c[j - 1] == '.')
{
if (c[j] >= 97 && c[j] <= 122)
c[j] = c[j] - 32;
}
j++;
}
return (c);
}
