#include "main.h"
/**
 * print_triangle - prints right angle triangle with hypothenuse on the left
 * @size: input integer
 * Return: Nothing
 */
void print_triangle(int size)
{
	int h, w; /* height and width */

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = 1; w < size - h; w++)
		{
			_putchar(' ');
		}
		for (w--; w < size; w++)
		{
			_putchar(35);
		}
	}
	_putchar('\n');
}

