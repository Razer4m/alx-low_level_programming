#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: Pointer to the string to be checked.
 * @accept: Pointer to the string containing the acceptable characters.
 *
 * Return: The number of bytes in the initial segment of s that consist only
 *         of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i, j, fnd;

	for (i = 0; s[i] != '\0'; i++)
	{
		fnd = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				fnd = 1;
				break;
			}
		}
		if (fnd == 0)
		{
			break;
		}
	}
	return (count);
}
