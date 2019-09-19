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
 if (a<0) {a = a * (-1); }  
printf("the last digit of %d is %d", n, a);
if (a == 0)
{ printf("and is 0\n"); }
else
if (a > 5)
{ printf("and is greater than 5\n"); }
else
{printf("and is less than 6 and not 0\n"); }
return (0);
}
