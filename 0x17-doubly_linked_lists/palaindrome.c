#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/*
*/
int pal(int a)
{
int b = a, c = 0;
while (b)
{
c = (b % 10) + ( c * 10);
b = b / 10;
}
if (c == a)
return (1);
else
return (0);
}

/**
main - largest palaindrome of two 3 digit numbers
Return: 0
*/

int main()
{
int i, j, largest = 0;
FILE *fp;
fp = fopen("102-result", "w");
for (i = 100; i < 1000; i++)
{
for (j = 100; j < 1000; j++)
{
if ((i * j) > largest && pal(i * j))
largest = i * j;
}
}
fprintf(fp,"%d", largest);
fclose(fp);
return (0);
}
