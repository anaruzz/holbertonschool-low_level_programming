#include "holberton.h"
#include <stdio.h>
/**
 * clear_bit - clears a bit
 * @n: pointer to number to clear bit in
 * @index: index at which to clear bit
 * Return: 1 on success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
  unsigned long int x;

  if (index > 31)
  return (-1);

  x = ~(1 << index);
  *n &= x;
  return (1);
}
