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
int i;
if (min > max)
{
return (NULL);
}
c = malloc(sizeof(int) * (max - min));
if (c == NULL)
return (NULL);

for (i = min; i <= max; i++)
c[i] = *(&min + i);
return (c);
}
