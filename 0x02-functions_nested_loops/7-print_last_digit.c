#include "main.h"
/**
 * print_last_digit - Entry point
 *
 * @i: input number
 * Description: function print the last digit in a number.
 * Return: positive last digit of a nnumber
 */
int print_last_digit(int i)
{
	int n;

	n = i % 10;
	if (n < 0)
	{
		_putchar(n + 48);
		return (-n);
	}
	else
	{
		_putchar(n + 48);
		return (n);
	}
}
