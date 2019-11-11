#include "holberton.h"
#include <stdio.h>
/**
 * flip_bits - function that returns the number of bits needed
 *to flip to get from one number to another.
 * @n: unsigned long int
 * @m: second unsigned long int
 * Return: number of bits
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int x = 0;

while (n || m)
{
if (n ^ m)
x++;
n >>= 1;
m >>= 1;
}
return (x);
}
