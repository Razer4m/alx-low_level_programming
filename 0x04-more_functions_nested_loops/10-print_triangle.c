#include "main.h"
/**
 * print_triangle - prints right angle triangle with hypothenuse on the left
 * @size: input integer
 * Return: Nothing
 */
void print_triangle(int size)
{
	int h, w; /* height and width */
	int a;

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (h = 0; h < size; h++)
	{
		for (w = size - 1; w > 1; w--)
		{
			_putchar(' ');
		}
		for (a = 0; a <= h; a++)
		{
			_putchar(35);
		}
		_putchar('\n');
	}
}

