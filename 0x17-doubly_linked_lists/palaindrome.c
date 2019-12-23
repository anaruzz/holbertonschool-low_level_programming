#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
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
		if ((i * j) > largest)
		largest = i * j;
	}
}
fprintf(fp,"%d", largest);
fclose(fp);
return (0);
}
