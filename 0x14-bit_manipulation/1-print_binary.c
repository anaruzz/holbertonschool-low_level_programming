#include "holberton.h"

/**
* rev - reverse a binary representation
* @n: unsigned long integer
* Return: unsigned long integer
*/
unsigned long int rev(unsigned long int n)
{
unsigned long int r = 0;
while (n > 0)
{
r <<= 1;
if (n & 1)
r ^= 1;
n >>= 1;
}
return (r);
}
/**
* print_binary - prints the binary representation of a number.
* @n: unsigned long int
* Return: Void
*/
void print_binary(unsigned long int n)
{
unsigned long int r;
if (n == 0)
_putchar('0');

r = rev(n);
while (n > 0)
{
if (r & 1)
_putchar('1');
else
_putchar('0');
n = n >> 1;
r = r >> 1;

}
}
