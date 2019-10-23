#include <stdlib.h>
#include "function_pointers.h"
/**
* array_iterator - execute a function on elements of array
* @array: array
* @size: size of array
* @action: pointer function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array != NULL && action != NULL)
{
size_t i;
for (i = 0; i < size; i++)
action(array[i]);
}
}
