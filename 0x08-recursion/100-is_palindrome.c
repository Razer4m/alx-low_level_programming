#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to the string.
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
/**
 * comparator - compares each character of the string.
 * @s: Pointer to a string.
 * @si: smallest iterator.
 * @bi: biggest iterator.
 * Return: .
 */
int comparator(char *s, int si, int bi)
{
	if (*(s + si) == *(s + bi))
	{
		if (si == bi || n1 == bi + 1)
		{
			return (1);
		}
		return (0 + comparator(s, si + 1, bi - 1));
	}
	return (0);
}

/**
 * is_palindrome - detects if a string is a palindrome.
 * @s: Pointer to a string.
 * Return: 1 if s is a palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
