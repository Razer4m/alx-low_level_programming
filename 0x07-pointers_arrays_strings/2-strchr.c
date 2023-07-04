#include "main.h"
/**
 * _strchr - Locates the first occurrence of a character in a string.
 * @s: Pointer to the string.
 * @c: Character to be located.
 *
 * Return: Pointer to the first occurrence of the character c in the string s,
 *         or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s);
		}
		i++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
