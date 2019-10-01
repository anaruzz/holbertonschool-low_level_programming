#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @str: string to print
 * Return: void
 */
void print_rev(char *str)
{
int i = 0;
for (i = 0; *(str + i); i++)
;
for (; i > 0; i--)
_putchar(*(str + i - 1));
_putchar('\n');
}
