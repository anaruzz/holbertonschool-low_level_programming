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
while (i < 99)
{
if (i != 98)
{
printf("%d, ", i);
i++;
}
else
{
printf("%d", i);
i++;
}
}
printf("\n");
}
else if (i > 98)
{
while (i >= 98)
{
if (i != 98)
{
printf("%d, ", i);
i--;
}
else
{
printf("%d", i);
i--;
}
}
printf("\n");
}
}
