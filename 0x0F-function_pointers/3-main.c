#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
* main - main program funcion
* @argc: integer
* @argv: array of strings
* Return: integer
*/
int main(int argc, char **argv)
{
int (*o)(int, int);
int n1, n2, r;
if (argc != 4)
{
printf("Error\n");
exit(98);
}

o = get_op_func(argv[2]);
if (o == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
n1 = atoi(argv[1]);
n2 = atoi(argv[3]);
r = o(n1, n2);
printf("%d\n", r);
return (0);
}
