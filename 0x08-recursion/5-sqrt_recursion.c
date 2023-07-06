#include "main.h"
/**
 * sqrt_helper - Recursive helper function to find the square root of n.
 * @n: The number to calculate the square root of.
 * @start: The starting point of the search range.
 * @end: The ending point of the search range.
 *
 * Return: The square root of n.
 */
int sqrt_helper(int n, int start, int end)
{
	int mid, result;

	if (start <= end)
	{
		mid = (start + end) / 2;
		result = mid * mid;

		if (result == n)
		{
			return (mid);
		}
		else if (result < n)
		{
			if ((mid + 1) * (mid + 1) > n)
			{
				return (mid);
			}
			else
			{
				return (sqrt_helper(n, mid + 1, end));
			}
		}
		return (sqrt_helper(n, start, mid - 1));
	}
	return (end);
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
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	return (sqrt_helper(n, 0, n));
}

