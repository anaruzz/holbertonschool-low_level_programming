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
for (i = 0; i < n; i++)
{
printf("%d", va_arg(al, int));
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

printf("\n");
va_end(al);
}
