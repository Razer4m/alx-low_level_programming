#include <stdio.h>
/**
* add - adds two integers
* @x: first integer to add
* @y: second integer to add
* Return: the sum
*/
int add(int x, int y)
{
	return (x + y);
}

/**
* sub - minus
* @x: first integer to add
* @y: second integer to add
* Return: the difference
*/
int sub(int x, int y)
{
	return (x - y);
}

/**
* mul - multiplies two integers
* @x: first integer to add
* @y: second integer to add
* Return: Product
*/
int mul(int x, int y)
{
	return (x * y);
}

/**
* div - divides two integers
* @x: first integer to add
* @y: second integer to add
* Return: the sum
*/
int div(int x, int y)
{
	if (y != 0)
	{
		return (x / y);
	}
	else
	{
		return (0);
	}
}

/**
* mod - adds two integers
* @x: first integer to add
* @y: second integer to add
* Return: the sum
*/
int mod(int x, int y)
{
	if (y != 0)
	{
		return (x % y);
	}
	else
	{
		return (0);
	}
}
