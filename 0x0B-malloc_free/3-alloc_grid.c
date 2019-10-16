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
if ((width <= 0) || (height <= 0))
return (NULL);
int *t;
t = (int *)malloc(width * height * sizeof(int));
int i, j;
for (i = 0; i < height; i++)
{
for (j = 0; j < width; j++)
*(t + i*width + j) = 0;
}
return (int **)t;
}
