#include "main.h"
/**
 * factorial - find the factorial of input n
 * @n: Input integer n.
 *
 * Return: factorial of a number and -1 if n is below 0.
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	return (-1);
}
