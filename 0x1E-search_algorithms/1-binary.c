#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * print_array - print elements in an array
 * @array: array to print
 * @start: index to start printing
 * @end: index to stop printing
 *
 * Return: void
 */
void print_array(int *array, size_t start, size_t end)
{
	printf("Searching in array: ");
	if (end == 0)
		end = 1;
	while (start < end)
	{
		printf("%d", array[start]);
		if (start != end - 1)
			printf(", ");
		start++;
	}
	printf("\n");
}

/**
* binary_search - search for a value in an array using the linear search
* @array: array to search in
* @size: size of the array
* @value: value to search for
* Return: int
*/
int binary_search(int *array, size_t size, int value)
{
size_t l, r, m;

if (!array || size == 0)
return (-1);

l = 0;
	r = size - 1;

	print_array(array, l, size);
	while (l < r)
	{
		m = (l + r) / 2;
		if (array[m] < value)
		{
			l = m + 1;
			print_array(array, l, size);
		}
		else if (array[m] > value)
		{
			r = m;
			print_array(array, l, r + 1);
		}
		else
			return (m);
	}

	return (-1);

}
