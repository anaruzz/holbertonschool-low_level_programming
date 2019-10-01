#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @str: string to print
 * Return: void
 */
void print_rev(char *str)
{
int i = 1;
while (*(str + i) != '\0')
{
i++;
}
int j;
for (j = i; j >= 0; j--)
{
_putchar(*(str + j));
}
_putchar('\n');
}
