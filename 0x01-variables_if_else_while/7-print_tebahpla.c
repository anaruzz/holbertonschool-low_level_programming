#include <stdio.h>
/**
 *main - print numbers
 *Description: print all single digit numbers of the
 *base 10
 *Return: 0 if true
 */
int main(void)
{
int i;
for (i = 'z' ; i >= 'a' ; i--)
putchar(i);
putchar('\n');
return (0);
}
