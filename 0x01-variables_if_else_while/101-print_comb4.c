#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
int x, z, y;
for (x = '0'; x <= '9'; x++)
{
for (z = x + 1; z <= '9'; z++)
{
for (y = z + 1; y <= '9'; y++)
{
putchar(x);
putchar(z);
putchar(y);
if (x != '7' || z != '8' || y != '9')
{
putchar(',');
putchar(' ');
}
else
putchar('\n');
}
}
}
return (0);
}
