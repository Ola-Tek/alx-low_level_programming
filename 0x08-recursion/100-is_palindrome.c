#include "main.h"
/**
 * _strlen_recursion - to print string length
 * @s: string inputed
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
/**
 * compare_string - compare each character
 * @s: string inputed
 * @left: smallest iterator
 * @right: largest iterator
 * Return: integer
 */
int compare_string(char *s, int left, int right)
{
	if ((*s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - string spelt the same
 * @s: the string to test
 * Return: 1 if it is a palindrome
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
