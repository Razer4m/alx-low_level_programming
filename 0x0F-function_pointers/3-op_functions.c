#include "3-calc.h"

/**
 * op_add - Adds two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Sum of 2 numbers.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Subtracts two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Difference of 2vnumbers.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Multiplies two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Product of 2 numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Divides two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: A Qoutient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Calculates the module of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The reminder of devision
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
