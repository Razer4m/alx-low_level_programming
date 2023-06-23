#include "main.h"
/**
 * print_square - makes a quare using # keys
 * @size: input integer
 * Return: Nothing
 */
void print_square(int size)
{
	int l, b;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (l = 0; l < size; l++)
	{
		for (b = 0; b < size; b++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}
