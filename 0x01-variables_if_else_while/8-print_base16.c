#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int i, j;
for (i = '0' ; i <= '9' ; i++)
putchar(i);
for (j = 'A' ; j <= 'F' ; j++)
putchar(j);
putchar('\n');
return (0);
}
