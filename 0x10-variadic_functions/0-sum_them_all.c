#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum of parameters
* @n: int
* Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
va_list al;
unsigned int i;
int sum = 0;
if (n <= 0)
return (0);

va_start(al, n);
for (i = 0; i < n; i++)
sum += va_arg(al, int);
va_end(al);
return (sum);
}
