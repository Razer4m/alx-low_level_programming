#include <stdlib.h>
#include "main.h"
/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int i = 0, j = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	concat = malloc((i + j + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < i; k++)
	{
		concat[k] = s1[k];
	}
	for (l = 0; l < j; l++)
	{
		concat[k + l] = s2[j];
	}
	concat[k + l] = '\0';
	return concat;
}
