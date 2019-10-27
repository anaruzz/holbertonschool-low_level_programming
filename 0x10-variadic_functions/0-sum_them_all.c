#include "variadic_functions.h"
#include <stdarg.h>
/**
* sum_them_all - sum of parameters
* @n: int
* Return: integer
*/
int sum_them_all(const unsigned int n, ...)
{
unsigned int i, sum = 0;
if (n == 0)
return (0);

va_list a;
va_start(a, n);
for (i = 0; i < n; i++)
sum += va_arg(a, unsigned int);
va_end(a);
return (sum);
}
