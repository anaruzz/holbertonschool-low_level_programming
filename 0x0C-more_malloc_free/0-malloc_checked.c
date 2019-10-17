#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: unsigned int
 * Return: Pointer
 */
void *malloc_checked(unsigned int b)
{
void *c;
c = malloc(b);
if (c == NULL)
{
exit(98);
}
return (c);
}
