#include <stdio.h>
#include <stdlib.h>
/**
* main - print change
* @argc: int
* @argv: pointer
* Return: int
*/
int main(int argc, char *argv[])
{
int i = 0;

int x = atoi(argv[1]);
if (x >= 25)
{
i += x / 25;
x = x % 25;
}
if (x >= 10)
{
i += x / 10;
x = x % 10;
}
if (x < 10)
{
i += x / 5;
x = x % 5;
}
if (x < 5)
{
i+= x / 2;
x = x %2;
}
i += x;
printf("%d\n", i);
}
