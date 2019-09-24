#include "holberton.h"
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: integer to start printing from
 * Return: void
 */
void print_to_98(int n)
{
int i;
i = n;
while (i < 99)
{
_putchar(i + '0');
_putchar(',');
_putchar(' ');
i++;
}
_putchar('\n');
}
