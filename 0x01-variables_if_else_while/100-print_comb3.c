#include <stdio.h>
/**
 * main - entry block
 * @void: no argument
 * Return: 0 (Sucess)
**/
int main(void)
{
int x, z;
for (x = '0'; x <= '8'; x++)
for (z = x + 1; z <= '9'; z++)
{
if (x != z)
{
putchar(x);
putchar(z);
if (x != '8' || z != '9')
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
