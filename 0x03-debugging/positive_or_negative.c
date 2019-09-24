#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "holberton.h"
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
void positive_or_negative(int i)
{
if (i == 0)
printf("%d is zero\n", i);
else
if (i > 0)
printf("%d is positive\n", i);
else
printf("%d is negative\n", i);
}
