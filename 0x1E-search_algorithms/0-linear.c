#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* linear_search - search for a value in an array using the linear search
* @array: array to search in
* @size: size of the array
* @value: value to search for
* Return: int
*/
int linear_search(int *array, size_t size, int value)
{
size_t i;
for (i = 0; i < size; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
