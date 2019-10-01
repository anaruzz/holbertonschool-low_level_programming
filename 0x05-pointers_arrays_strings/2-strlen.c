#include "holberton.h"
/**
 * _strlen - the length of a string
 * @*s - string to print its length
 * Return integer
 */
int _strlen(char *s)
{
int i = 0;
while(s[i] != '\0')
{
i++;
}
return (i);
}
