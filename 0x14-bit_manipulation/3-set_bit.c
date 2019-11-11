#include "holberton.h"
/**
* set_bit - sets a bit at index to 1
* @n: pointer to int to bit-set
* @index: index to set bit at
* Return: 1 or -1
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int x;

if (index > 31)
return (-1);

x = 1 << index;
*n |= x;
return (1);
}
