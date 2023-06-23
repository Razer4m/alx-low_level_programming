#include "main.h"
/**
 * print_diagonal - prints backward slashes to make diagonal lines
 * @n: Input integer for number of lines
 * Retun: noting
 */
void print_diagonal(int n)
{
	int x, y;

	if (n < 0)
	{
		_putchar('\n');
	}
	for (x = 0; x < n; x++)
	{
		for (y = 0; y < x; y++)
		{
			_putchar(' ');
		}
		_putchar(92);
		if (x < n - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
