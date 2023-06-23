#include "main.h"
/**
 * more_numbers - prints number from 0 to 14, 10 times
 * uses ASCII codes
 * Return: Nothing
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			if (y >= 10)
			{
				_putchar(y / 10 + 48);
			}
			_putchar(y % 10 + 48);
		}
		_putchar('\n');
	}
}
