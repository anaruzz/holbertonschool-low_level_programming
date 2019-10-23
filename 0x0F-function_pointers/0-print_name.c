#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - print a name
* @name: string
* @f: pointer
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
