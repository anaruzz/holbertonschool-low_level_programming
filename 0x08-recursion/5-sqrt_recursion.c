#include "holberton.h"
/**
*_sqrt_recursion - natural square
* @n : int
* Return: int
*/
int _sqrt_recursion(int n)
{
if (n >= 1)
return (test_sqrt(n, (n / 2) + 1));
else
return (-1);
}
/**
*test_sqrt - test natural squar
* @a : int
* @b : int
* Return: int
*/
int test_sqrt(int a, int b)
{
if (b * b == a)
return (b);
else if (b < 0)
return (-1);
else
return (test_sqrt(a, b - 1));
}
