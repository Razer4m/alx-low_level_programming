#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: The input string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	char len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	char i = len / 2;

	if (len % 2 == 0)
	{
		i++;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
