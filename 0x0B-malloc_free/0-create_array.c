#include "holberton.h"
#include <stdlib.h>
/**
* create_array - create an array
* @size: unsigned int
* @c: char
* Return: pointer
*/
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
char *t;
t = malloc(size * sizeof(char));
unsigned int i;

if (t == 0)
return (NULL);

for (i = 0 ; i < size; i++)
*(t + i) = c;

return (t);
}
