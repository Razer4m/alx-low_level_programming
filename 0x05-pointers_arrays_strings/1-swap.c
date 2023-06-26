#include "main.h"
/**
 * swap_int - swapping 2 integers
 * @a: input int
 * @b: input int
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int x = *a ; /* x changing variable*/

	*a = *b;
	*b = x;
}
