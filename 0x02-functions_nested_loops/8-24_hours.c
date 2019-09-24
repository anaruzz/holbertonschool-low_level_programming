#include "holberton.h"
/**
 * jack_bauer - entry point
 * 
 * Return: void
*/
void jack_bauer(void)
{
int i, j, k, l;
int x = 10;
for (i = 0; i <=2 ; i++)
{
for (j = 0; j < x; j++)
{
if (i == 2) x = 4;
for (k = 0; k <= 5;k++)
{
for (l = 0;l <= 9; l++)
{
putchar(i+'0');
putchar(j+'0');
putchar(':');
putchar(k+'0');
putchar(l+'0');
putchar('\n');
}
}
}
}
}
