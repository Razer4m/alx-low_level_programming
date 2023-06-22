#include "main.h"
/**
 * _isdigit - determines if input c is a number
 * @c: takes in a value and compares using ASCII codes
 * Return: 1 if c is a degit and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
