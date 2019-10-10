#include "holberton.h"
/**
 * longueur - length of the string
 * @s: String
 * Return: int
 */

int longueur(char *s)
{
if (!*s)
return (0);
else
return (1 + longueur(s + 1));
}

/**
 * check - palindrome algorithm
 * @s: String to check
 * @a: First char
 * @b: Last char
 * Return: int
 */

int check(char *s, int a, int b)
{
if (s[a] != s[b])
return (0);
if (a >= b)
return (1);
return (check(s, a + 1, b - 1));
}

/**
 * is_palindrome - Tests a string if palindrome
 * @s: String
 * Return: int
 */

int is_palindrome(char *s)
{
int end = longueur(s);
if (!check(s, 0, end - 1))
return (0);
return (1);
}
