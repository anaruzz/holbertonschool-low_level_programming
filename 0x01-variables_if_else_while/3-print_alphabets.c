#include <stdio.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
char i, j;
for (i = 'a' ; i <= 'z'; i++)
putchar(i);
putchar('\n');
for (j = 'A' ; j <= 'Z'; j++)
putchar(j);
return (0);
}
