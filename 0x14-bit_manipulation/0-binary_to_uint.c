#include "holberton.h"
#include <stdlib.h>

/**
 * test - ftest an int
 * @b: pointer
 * Return: int
*/
int test (char *b)
{
int i = 0, c = 0;

}

/**
 * puis - puisance
 * @b[i]: integer
 *@@i: integer
 * Return: int
*/
int puis (char *x, int i)
{
int a, j;
a = atoi (x);
for (; i >=0; i--)
j *= a;
return (j);
}


/**
 * binary_to_uint - function that converts a binary to an unsigned int
 * @b: pointer
 * Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int len, i, j, s;

if (b == NULL ||
return (0);

for (len = 0; b[len]; len++)
;
j = 0;
s = 0;
for (i = len + 1; i >= 0; i--)
{
if (b[i] == '0')
{
s = s + (puis(b[i], i) * b[i]);
s *=10;
}
}
}
