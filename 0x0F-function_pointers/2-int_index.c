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
int i;
if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) == 1)
return (i);
}
return (-1);
}
