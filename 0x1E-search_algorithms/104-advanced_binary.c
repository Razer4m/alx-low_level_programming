#include "search_algos.h"

/**
 * print_subarray - prints a subarray
 * @array: array to print
 * @left: left index of the subarray
 * @right: right index of the subarray
 */
void print_subarray(int *array, size_t left, size_t right)
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
 * recursive_binary - recursive function to perform advanced binary search
 * @array: input array
 * @left: left index of the subarray
 * @right: right index of the subarray
 * @value: value to search for
 * Return: index where value is found or -1 if not found
 */
int recursive_binary(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	if (left <= right)
	{
		print_subarray(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] == value && (mid == left || array[mid - 1] != value))
			return (mid);
		else if (array[mid] >= value)
			return (recursive_binary(array, left, mid, value));
		else
			return (recursive_binary(array, mid + 1, right, value));
	}
	return (-1);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers
 * using advanced binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index where value is found or -1 if not found or array is NULL
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (recursive_binary(array, 0, size - 1, value));
}
