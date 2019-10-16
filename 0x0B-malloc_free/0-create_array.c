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
char *t;
unsigned int i;
if (size == 0)
return (NULL);
t = malloc(size * sizeof(char));
if (t == NULL)
return (NULL);
for (i = 0 ; i < size; i++)
*(t + i) = c;
return (t);
}
