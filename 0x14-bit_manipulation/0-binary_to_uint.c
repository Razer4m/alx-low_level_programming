#include "main.h"
/**
 * binary_to_unit - Converts a binary number to an unsigned int
 * @b: POinter to the string
 *
 * Return: The converted number, or 0if there is one or more chars
 * in the string b that is not 0 or 1
 */
unsigned int binary_to_unit(const char *b)
{
	unsigned int x = 0;
	int i = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
		x <<= 1;
		x += b[i] - '0';
		i++;
	}
	return (x);
}
