#include "holberton.h"
/**
 * string_toupper - change lowercase letters
 * 
 * Return: void
 */
char *string_toupper(char *ch)
{
int i;
for (i = 0; ch[i]; i++)
{
if(ch[i] >= 'a' && ch[i] <= 'z')
ch[i] = ch[i] - 32;
}
return (ch);
}
