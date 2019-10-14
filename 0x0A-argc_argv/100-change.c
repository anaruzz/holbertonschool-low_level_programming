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
int x = 0;
int coins[5]={25, 10, 5, 2, 1};

if (argc != 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) <= 0)
{
printf("0\n");
return (1);
}
x = atoi(argv[1]);
int j = 0;
while (x != 0)
{
i = x / coins[j];
x = x % coins[j];
j++;
}
printf("%d\n", i);
return (0);
}
