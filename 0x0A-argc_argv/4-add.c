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
int i, j, x = 0;
for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j]; j++)
{
if (argv[i][j] < 48  || argv[i][j] > 57)
{
printf("Error\n");
return (1);
}
}
x += atoi(argv[i]);
}
printf("%d\n", x);
return (0);
}
