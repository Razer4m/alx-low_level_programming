#include "main.h"
/**
 * cap_string - Capitalizes all words in a string.
 * @str: Pointer to the string.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *str)
{
	int i = 0;
	int cap_netxt = 1;

	/* Capitalize first character if it's a letter */
	while (str[i] != '\0')
	{
		if (cap_next && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] ('a' - 'A');
		}
		cap_next = 0;
	while (str[i] != '\0')
	{
		/* Check for word separators */
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		    str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			cap_next = 1;
		}

		i++;
	}

	return (str);
}
