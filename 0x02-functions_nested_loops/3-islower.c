#include "holberton.h"
/**
 * _islower - check for lowercase character
 * @c: char to check
 * Return: Always 0.
 */
int _islower(int c)
{
if (c > 'a' && c < 'z')
return (1);
else
return (0);
}
