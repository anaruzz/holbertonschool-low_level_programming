#include <stdio.h>

void iprint(int n)
  { 
if (n < 0)
{
n = (- 1) * n;
putchar('-');
}
    if( n > 9 )
      { int a = n / 10;

        n -= 10 * a;
        iprint(a);
      }
    putchar('0'+n);
  }

int main(void)
{
  int n = 123456;
  int m = -15;
  int c = 0;
  iprint(n);
  putchar('\n');
  iprint(m);
  putchar('\n');
  iprint(c);
  putchar('\n');
  return (0);
}
