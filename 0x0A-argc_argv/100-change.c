#include <stdio.h>
#include <stdlib.h>
/**
* main - adds numbers
* @argc: int
* @argv: pointer
* Return: int
*/
int main(int argc, char *argv[])
{
int i = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
else
{
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
i += x;
x = 0;
}
printf("%d\n", i);
}
