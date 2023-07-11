#include <stdlib.h>
#include "main.h"
/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of strings containing the arguments.
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int i, j;
	int len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			len++;
		}
		total_len += len;
	}
	total_len += ac;
	concat = malloc((total_len + 1) * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	j = 0;
	for (i = 0; i < ac; i++)
	{
		len = 0;
		while (av[i][len] != '\0')
		{
			concat[j] = av[i][len];
			j++;
			len++;
		}
		concat[j] = '\n';
		j++
	}
	concat[j] = '\0';
	return (concat);
}
