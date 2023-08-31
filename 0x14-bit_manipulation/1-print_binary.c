#include "main.h"
/**
 * print_binary - Prints the binary rep of an unsigned long int.
 * @n: The number to be converted and printed.
 */
void print_binary(unsigned long int n)
{
	unsigned long int m = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int f = 0;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (m)
	{
		if (n & m)
		{
			f = 1;
			_putchar('1');
		}
		else if (f)
		{
			_putchar('0');
		}
		m >>= 1;
	}
}
