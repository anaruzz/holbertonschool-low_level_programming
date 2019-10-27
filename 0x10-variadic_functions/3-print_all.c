#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - print strings
* @format: string
* Return: void
*/
void print_all(const char * const format, ...)
{
va_list al;
int i, x = 0;
float f;
char *s, c;

va_start(al, format);
while (format[x] != '\0')
{
switch (format[x])
{
  case 'c':
  c = va_arg(al, int);
  printf("%c", c);
  break;
  case 'i':
  i = va_arg(al, int);
  printf("%d", i);
  break;
  case 'f':
  f = va_arg(al, double);
  printf("%f", f);
  break;
  case 's':
  s = va_arg(al, char *);
  if (s == NULL)
  printf("(nil)");
  printf("%s", s);
  break;
}
x++;
if (format[x] + 1 != '\0' && (format[x] == 'c' ||format[x] == 's' ||format[x] == 'f' ||format[x] == 'i'))
printf(", ");
}
printf("\n");
va_end(al);
}
