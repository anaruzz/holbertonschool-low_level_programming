#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* alloc_grid- 2d array
* @width: integer
* @height: integer
* Return: pointer
*/
int **alloc_grid(int width, int height)
{
int **t;
int i, j, k;
if ((width <= 0) || (height <= 0))
return (NULL);

t = malloc(height * sizeof(int *));
if (t == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
t[i] = malloc(sizeof(int) * width);
if (t[i] == NULL)
{
for (k = 0; k < i ; k++)
free(t[k]);
free(t);
return (NULL);
}
for (j = 0; j < width; j++)
t[i][j] = 0;
}
return (t);
}
