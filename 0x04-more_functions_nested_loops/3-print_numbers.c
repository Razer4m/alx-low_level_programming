#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Uses ASCII codes
 * Return: nothing
 */
void print_numbers(void)
{
	int n = 48;

	while (n <= 57)
	{
		_putchar(n++);
	}
	_putchar('\n')
}
