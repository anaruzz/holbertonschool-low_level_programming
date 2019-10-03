#include "holberton.h"
/**
 * cap_string - capitalize all words
 * @ch: string
 * Return: pointer
 */
char *cap_string(char *ch)
{
  int i, j = 0;
  while (ch[j])
    j++;
for (i = 0; i < j; i++)
{
if(ch[i - 1] == ' ' || ch[i - 1] == '\t'|| ch[i - 1] =='\n' || ch[i - 1] == ',' || ch[i - 1] == ';'|| ch[i - 1] =='.' || ch[i - 1] == '!' || ch[i - 1] == '?'|| ch[i - 1] =='"' || ch[i - 1] == '(' || ch[i - 1] == ')' || ch[i - 1] == '{' || ch[i -1] == '}')
{
if (ch[i] >= 'a' && ch[i] <= 'z')
ch[i+1] = ch[i+1] - 32;
}
}
return (ch);
}
