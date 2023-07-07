#include "main.h"
/**
 * _isupper - determines if a letter is uppercase of alphabet
 * @c:nletter to be check using ASCII codes
 * Return: 1 for  upper and 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
