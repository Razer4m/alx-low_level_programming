#include "main.h"
/**
 * puts_half - prints the second half of a string
 * @str: The input string
 *
 * Return: Nothing
 */
void puts_half(char *str)
{
	int len = 0;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	int i = len / 2;

	if (len % 2 !0)
	{
		first++;
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}