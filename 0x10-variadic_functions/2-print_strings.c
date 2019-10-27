#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* print_strings - print strings
* @n: int
* @separator: a string between numbers
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list al;
unsigned int i;
char *x;

va_start(al, n);
for (i = 0; i < n; i++)
{
x = va_arg(al, char *);
if (x == NULL)
printf("(nil)");
else
printf("%s", x);
if (separator != NULL && i != n - 1)
printf("%s", separator);
}

printf("\n");
va_end(al);
}
