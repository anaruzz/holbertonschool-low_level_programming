#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: unsigned int
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
int *c;
c = malloc(b);
if (c == NULL)
{
exit(EXIT_SUCCESS);
exit (98);
return (void *)98;
}
return (c);
}
