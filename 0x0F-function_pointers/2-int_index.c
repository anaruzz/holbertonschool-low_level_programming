#include <stdlib.h>
#include "function_pointers.h"
/**
* int_index - search for an integer
* @array: array
* @cmp: pointer function
* @size: integer
* Return: void
*/
int int_index(int *array, int size, int (*cmp)(int))
{
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);
int i = 0,j;
while (i <= size)
{
i++;
j = cmp(array[i]);
if(j == 1)
return (i);
}
return (-1);
}
