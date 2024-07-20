#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of
 * integers using the Jump search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index where value is found or -1 if not found or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i;

	if (array == NULL || size == 0)
		return (-1);

	step = (size_t)sqrt(size);
	prev = 0;

	while (array[(prev + step < size ? prev + step : size - 1)] < value)
	{
		printf("Value checked array[%lu] = [%d]\n",
				prev + step < size ? prev + step : size - 1,
				array[(prev + step < size ? prev + step : size - 1)]);
		prev += step;
		if (prev >= size)
			return (-1);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			prev, prev + step < size ? prev + step : size - 1);

	for (i = prev; i < size && i <= prev + step; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}

	return (-1);
}
