#include "holberton.h"
/**
 * _strlen_recursion - Finds the length of the string to be tested
 * @s: The string to test
 * Return: The length of the string
 */

int longueur(char *s)
{
if (*s == '\0')
return (0);
else
return (longueur(s + 1) + 1);
}

/**
 * palindrome_checker - function for recursive palindrome algo
 * @s: String to check
 * @start: First char of string to check
 * @end: Last char of string to check
 *
 * Return: 1 if str is palindrome, 0 otherwise
 */

int check(char *s, int start, int end)
{
if (s[start] != s[end])
return (0);
if (start >= end)
return (1);
return (check(s, start + 1, end - 1));
}

/**
 * is_palindrome - Tests whether a string is a palindrome
 * @s: The string to test
 * Return: 1 if palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
int end = longueur(s);
if (!check(s, 0, end - 1))
return (0);
return (1);
}
