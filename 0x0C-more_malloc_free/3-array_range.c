#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
* array_range - create array
* @min: int
* @max: int
* Return: Pointer
*/
int *array_range(int min, int max)
{
int *c;
int i, diff;
if (min > max)
{
return (NULL);
}
diff = max - min + 1;
c = malloc(sizeof(int) * (diff));
if (c == NULL)
return (NULL);

for (i = min; i <= diff; i++)
{
c[i] = min;
min++;
}
return (c);
}
