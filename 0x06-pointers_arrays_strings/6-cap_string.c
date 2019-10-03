#include "holberton.h"
#include <unistd.h>
#include <stdio.h>
/**
 * cap_string - capitalize all words
 * @ch: string
 * Return: pointer
 */
char *cap_string(char *ch)
{
  int i = 0, j ;
  while (ch[i])
    i++;
  j = 0;
  while (j < i)
    {
      if (ch[j - 1] == ' ' || ch[j - 1] == '\t' || ch[j - 1] == '\n' || ch[j - 1] == '.')
	{
	  if (ch[j] >= 97 && ch[j] <= 122)
	    ch[j] = ch[j] - 32;
	}
      j++;
    }
return (ch);
}
