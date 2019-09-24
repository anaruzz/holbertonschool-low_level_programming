#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print all natural numbers from n to 98
 * @n: integer to start printing from
 * Return: void
 */
void print_to_98(int n)
{
int i;
i = n;
if (i < 99)
{
i = n;
while (i < 99)
{
printf("%d, ", i);

i++;
}
}
else if (i > 98)
{
i = n;
while (i > 99)
{
printf("%d, ", i);
i--;
}
}
_putchar('\n');
}
