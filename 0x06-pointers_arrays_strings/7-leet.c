#include "main.h"
/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *str)
{
	char *leet_chars = "4433007711";
	char *leet_letters = "aAeEoOtTlL";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_letters[j] != '\0'; j++)
		{
			if (str[i] == leet_letters[j])
			{
				str[i] = leet_chars[j];
				break;
			}
		}
	}

	return (str);
}
