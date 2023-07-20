#include "variadic_functions.h"
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: This function prints the numbers provided as arguments,
 * separated by the string @separator. A new line is printed at the end.
 * If @separator is NULL, it won't be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int num;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		while (n != 0)
		{
			_putchar(num % 10 + '0');
		}
		if (separator != NULL && i < n - 1)
		{
			while (*separator != '\0')
			{
				_putchar(*separator);
				separator++;
			}
		}
	}
	va_end(args);
	_putchar('\n');
}
