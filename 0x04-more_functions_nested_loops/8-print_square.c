#include "holberton.h"
/**
 *print_square - print a square.
 *@size: size of square
 *return: void
 */
void print_square(int size)
{
if (size > 0)
{
int i, j;
for (i = 1; i <= size; i++)
{
for (j = 1; j <= size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
{
_putchar('\n');
}
}
