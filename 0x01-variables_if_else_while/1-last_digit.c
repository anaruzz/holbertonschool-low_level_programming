#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
/* betty style doc for function main goes there */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int a;
a = n % 10;
printf("Last digit of %d is\n", a);
if (n == 0)
{ printf(" and is 0 \n"); }
else
if (n > 5)
printf(" and is greater than 5 \n");
else
printf(" and is less than 6 and not 0 \n");
return (0);
}
