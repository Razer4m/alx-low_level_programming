#include "main.h"
/**
 * print_to_98 - outputs number from n to or back to 98
 * @i: input integer
 * Return: nothing
 */
void print_to_98(int i)
{
	for (i ; i <= 98; i++)
	{
		_putchar(i + 44 + ' ');
	}
	for (i ; i >= 98; i--)
	{
		_putchar(i + 44 + ' ');
	}
	_putchar('\n');
}
