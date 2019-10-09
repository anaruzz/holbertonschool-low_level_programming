#include "holberton.h"
/**
* is_prime_number - prime number
* @n : int
* Return: int
*/
int is_prime_number(int n)
{
if (n <= 1)
return (0);
return (premier(n, n / 2));
}
/**
* premier - prime number
* @n : int
* Return: int
*/
int premier(int a, int b)
{
if (a % b == 0)
return (0);
else
prime(a, b - 1);
return (1);
}
