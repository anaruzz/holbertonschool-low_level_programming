#include "holberton.h"
/**
 * _abs - entry point
 * @i : number to print absolute value
 * Return: int
 */
int _abs(int i)
{
if (i < 0)
return (i * (-1));
else
return (i);
}
