#include "holberton.h"
#include <stdlib.h>

/**
 * puis - puisance
 * @x: integer
 * @y: integer
 * Return: int
*/
int puis (int a, int b)
{
int r = a;
if (b == 0)
return (1);

for (; b > 1; b--)
a *= r;
return (a);
}

/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int i, len2, res = 0;

if (b == NULL)
return (0);

i = 0;
while (b[i])
{
if (b[i] != '0' && b[i] != '1')
return (0);
i++;
}

i--;
for (len2 = i; len2 >= 0; len2--)
{
if (b[len2] == '1')
res += puis(2, i - len2);
}

return (res);
}
