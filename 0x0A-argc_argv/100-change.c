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
if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) <= 0)
{
printf("0\n");
}
int i = 0;
int x = atoi(argv[1]);
i = x / 25;
x = x % 25;

i += x / 10;
x = x % 10;

i += x / 5;
x = x % 5;

i+= x / 2;
x = x %2;

i += x / 1;
printf("%d\n", i);
return (0);
}
