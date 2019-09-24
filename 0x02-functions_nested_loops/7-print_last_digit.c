#include "holberton.h"
/**
 * print_last_digit - entry point
 * @i : number to print last digit
 * Return: int
*/
int print_last_digit(int i)
{
int x = i % 10;
if (x < 0)
x = -x;
_putchar(x + '0');
return (x);
}
