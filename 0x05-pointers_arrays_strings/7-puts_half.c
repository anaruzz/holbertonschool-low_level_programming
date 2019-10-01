#include "holberton.h"
/**
 * puts_half - prints second half of a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int i = 0;
int n;
while (*(str + i) != '\0')
i++;
int k = i;
if (i % 2 == 0)
n = i / 2;
else
n = (i - 1) / 2;
for (i = n + 1; i <= k ; i++)
_putchar(*(str + i));
_putchar('\n');
}
