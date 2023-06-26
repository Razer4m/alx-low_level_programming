#include "main.h"
/**
 * print_array - Prints array of element n
 * @a: Array input int
 * @n: number of elememnts of array
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		_putchar(a[i]);
		i++;

		if (i != (n - 1))
		{
			_putchar(', ');
		}
	}
	_putchar('\n');
}
