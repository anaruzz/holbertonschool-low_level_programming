#include "holberton.h"
/**
 * puts2 - print every other character
 * @str: sting
 * Return: void
 */
void puts2(char *str)
{
int i = 0;
while (*(str + i) != '\0')
{
_putchar(*(str + i));
i = i + 2;
}
_putchar('\n');
}
