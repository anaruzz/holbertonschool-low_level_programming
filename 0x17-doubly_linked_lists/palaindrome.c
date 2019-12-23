#include "lists.h"

/**
main - largest palaindrome of two 3 digit numbers
Return: 0
 */

int main()
{
int i, j, largest = 0;
for (i = 100; i < 1000; i++)
{
	for (j = 100; j < 1000; j++)
	{
		if ((i * j) > largest)
		largest = i * j;
	}
}
printf("%d\n", largest);
}
