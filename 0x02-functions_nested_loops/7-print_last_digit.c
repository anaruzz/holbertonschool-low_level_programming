#include "holberton.h"
/**
 * print_last_digit - entry point
 * @i : number to print last digit
 * Return: int
 */
int print_last_digit(int i)
{
int x = i % 10;
_putchar(x);
return (x);
}
