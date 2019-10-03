#include "holberton.h"
/**
 * rot13 - rot13 encoding generator
 * @s: char 
 * Return: char
 */
char *rot13(char *s)
{
int i,j, n = 0;
char old[] = "ABCDEFGHIJKLMabcdefgihijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char new[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
for (i = 0; ch[i]; i++)
{
while (old[j] != && n == 0)
{
if (s[i] == old[j])
{
s[i] = new[j];
n = 1;
}
j++;
}
n = 0;
}
return (s);
}

