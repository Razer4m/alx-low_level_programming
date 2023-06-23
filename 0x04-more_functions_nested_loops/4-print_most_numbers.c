#include "main.h"
/**
 * print_most_numbers - Prints number from 0 to 9 except 2 and 4
 * Uses ASCII codes
 * Return: nothing
 */
void print_most_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		if (n == 2 || n == 4)
		{
			n++;
			continue;
		}
		_putchar(n++);
	}
	_putchar('\n');
}
