#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string
 * Return: void
 */
void rev_string(char *s)
{
int i = 0;
while (*(s + i) != '\0')
i++;
i--;
int j = 0;
char a;
 int k = i;
while (j < (k / 2))
{
a = *(s + i);
*(s + i) = *(s + j);
*(s + j) = a;
i--;
j++;
}
}
