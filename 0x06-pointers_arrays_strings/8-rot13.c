#include "holberton.h"
/**
* rot13 - rot13 enoding
* @s: char pointer
* Return: return char
*/
char *rot13(char *s)
{
int i;
int j;
int n = 0;
char old[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
char new[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";
i = 0;
while (s[i])
{
j = 0;
while (old[j] != '\0' && n == 0)
{
if (s[i] == old[j])
{
s[i] = new[j];
n = 1;
}
j++;
}
n = 0;
i++;
}
return (s);
}
