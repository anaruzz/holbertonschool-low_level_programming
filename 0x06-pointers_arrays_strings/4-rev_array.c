#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: integer
 * @n: integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i, j;
int c;
for (j = 0; j < n ; j++)
;
for (i = 0; i < (n / 2); i++)
{
c = a[i];
a[i] = a[j - i - 1];
a[j - i - 1] = c;
}
}
