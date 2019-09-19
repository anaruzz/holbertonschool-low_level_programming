#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
char i = 'a';
while (i < 'z')
{
if ((i != 'q') && (i != 'e'))
putchar(i);
i++;
}
return (0);
}
