#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* op_add - operation funcion
* @a: integer
* @b: integer
* Return: integer
*/
int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - operation funcion
* @a: integer
* @b: integer
* Return: integer
*/
int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - operation funcion
* @a: integer
* @b: integer
* Return: integer
*/
int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - operation funcion
* @a: integer
* @b: integer
* Return: integer
*/
int op_div(int a, int b)
{
if (b == 0)
{
  printf("Error");
  exit(100);
}
return (a / b);
}


/**
* op_div - operation funcion
* @a: integer
* @b: integer
* Return: integer
*/
int op_mod(int a, int b)
{
if (b == 0)
{
  printf("Error");
  exit(100);
}
return (a % b);
}
