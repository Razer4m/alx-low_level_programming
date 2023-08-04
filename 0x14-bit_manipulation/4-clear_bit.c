#include "main.h"
/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: Pointer to the number whose bit is to be set/
 * @index: The index of the bit to be set
 *
 * Return: 1 if success, or -1 if invalid
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;
	
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	mask = 1 << index;

	*n &= ~mask;
	return (1);
}
