#include "main.h"
/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: Pointer to the number whose bit is to be set/
 * @index: The index of the bit to be set
 *
 * Return: 1 if success, or -1 if invalid
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	unsigned long int mask = 1 << index;

	*n |= mask;
	return (1);
}
