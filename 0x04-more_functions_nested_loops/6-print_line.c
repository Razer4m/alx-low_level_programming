#include "main.h"
/**
 * print_line - print line in the teminal according to the specifed n
 * @n: input integer for number of underscore to be used
 * Return: Nothing
 */
void print_line(int n)
{
	int x = 0;

	while (x < n)
	{
		_putchar(95);
		x++;
	}
	_putchar('\n');
}
