#include "holberton.h"
#include <unistd.h>
/**
 * cap_string - capitalize all words
 * @ch: string
 * Return: pointer
 */
char *cap_string(char *c)
{
  int i = 0, x, j;
while (c[i])
i++;
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
for(j = 0; j<= i; j++)
{
if (c[j] == '\t')
{
for (x = j; x <= i; x++)
c[x] = c[x + 1];
}
}
return (c);
}
