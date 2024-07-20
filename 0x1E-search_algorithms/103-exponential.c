#include "search_algos.h"

/**
 * print_array - prints an array
 * @array: array to print
 * @left: left index
 * @right: right index
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search_exp - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: input array
 * @left: left index of the subarray to search in
 * @right: right index of the subarray to search in
 * @value: value to search for
 * Return: index where value is found or -1 if not found or array is NULL
 */
int binary_search_exp(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		print_array(array, left, right);
		mid = left + (right - left) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using the Exponential search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index where value is found or -1 if not found or array is NULL
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	if (bound < size)
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, bound);
	else
		printf("Value found between indexes [%lu] and [%lu]\n", bound / 2, size - 1);

	return (binary_search_exp(array,
				bound / 2, bound < size ? bound : size - 1,
				value));
}
