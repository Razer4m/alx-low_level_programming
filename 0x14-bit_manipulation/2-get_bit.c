#include "main.h"
/**
 * get_bit - Return the value of a bit at a given index.
 * @n: The number to check the bit from
 * @index: The number of the bit
 *
 * Return: The value of the bit (0 or 1),
 * or -1 invalid index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = n >> index;

	return (mask & 1);
}
