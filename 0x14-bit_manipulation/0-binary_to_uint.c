#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A string containing the binary number.
 *
 * Return: The converted unsigned int, or 0 if b is NULL or contains
 *         characters other than '0' or '1'.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int r = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		r = (r << 1) + (*b - '0');
		b++;
	}
	return (r);
}
