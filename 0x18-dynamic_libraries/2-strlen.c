#include "main.h"
/**
 * _strlen - Calculates the length of a string
 * @s: The input string
 * Return: The length of a string
 */
int _strlen(char *s)
{
	char *count = s;

	while (*count != '\0')
	{
		count++;
	}
	return (count - s);
}
