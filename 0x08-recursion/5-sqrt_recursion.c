#include "main.h"
/**
 * sqrt_helper - Recursive helper function to find the square root of n.
 * @n: The number to calculate the square root of.
 * @i: Iterator
 *
 * Return: The square root of n.
 */
int sqrt_helper(int n, int i)
{
	if (i % (n / i) == 0)
	{
		if (i * (n / i) == n)
		{
			return (i);
		}
		else
		{
			return (-1);
		}
	}
	return (0 + sqrt_helper(n, i + 1));
}
/**
 * _sqrt_recursion - Returns the square root of n
 * @n: Input integer.
 *
 * Return: The results of a square root number
 *           -1 if sqrt does not exist.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 2));
}

