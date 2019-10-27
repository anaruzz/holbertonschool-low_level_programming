#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_numbers - sum of parameters
* @n: int
* @separator: a string between numbers
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list al;
unsigned int i;

va_start(al, n);
for (i = 0; i < n - 1; i++)
printf("%d%s", va_arg(al, int), separator);
printf("%d\n", va_arg(al, int));
va_end(al);
}
