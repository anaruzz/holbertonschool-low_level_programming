#include <stdio.h>
/**
 *main - print largest prime factor
 *
 * Return: int
 */
int main(void)
{
int i = 2;
long x = 612852475143;
while ((x != 0) && (i < x))
{
if ((x % i) != 0)
i++;
else
x = x / i;
}
printf("%d\n", i);
return (0);
}
