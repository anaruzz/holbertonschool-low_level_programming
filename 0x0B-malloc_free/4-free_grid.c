#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
* free_grid- free 2d array
* @grid: matrix
* @height: integer
* Return: void
*/
void free_grid(int **grid, int height)
{
int k = 0;
while (k < height)
{
free(grid[k]);
k++;
}
free(grid);
}
