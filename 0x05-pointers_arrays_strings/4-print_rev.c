#include "holberton.h"
/**
 * print_rev - print a string in reverse
 * @str: string to print
 * Return: void
 */
void print_rev(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
i++;
}
int j;
for (j = i; j != -1; j--)
{
_putchar(*(str + j));
}
_putchar('\n');
}
