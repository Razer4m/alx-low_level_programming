#include "main.h"

/**
 * flip_bits - Returns the number of bits needed to flip to get from one
 *             number to another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x_r = n ^ m;
	unsigned int c = 0;

	while (x_r)
	{
		c += x_r & 1;
		x_r >>= 1;
	}
	return (c);
}
