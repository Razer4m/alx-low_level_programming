#include "main.h"
/**
 * reverse_array - Reverses the contents of an array of integers
 * @a: POinter to an array
 * @n: Number of elemtnts in the array.
 * Retunr: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;
	int b;

	if (n <= 1)
	{
		return;
	}
	for (i = 0; i < n / 2; i++)
	{
		b = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = b;
	}
}
