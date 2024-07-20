#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list
 *
 * @list: pointer to the head of the skip list to search in
 * @value: value to search for
 *
 * Return: pointer to the first nde vlau is located or NULL if not found
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *express = list, *current = list;
	size_t step, prev_index;

	if (list == NULL)
		return (NULL);

	step = sqrt_list_size(list);

	while (express && express->next && express->n < value)
	{
		prev_index = express->index;
		current = express;

		printf("Value checked at index [%lu] = [%d]\n", express->index, express->n);

		express = express->express;
	}
	if (express)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev_index, express->index);
	}
	else
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				prev_index, express ? express->index : prev_index);
	}
	while (current && current->index <= (express ? express->index : prev_index))
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);

		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}

/**
 * sqrt_list_size - computes the step size based on the list size
 *
 * @list: pointer to the head of the skip list
 *
 * Return: step size based on the square root of the list size
 */
size_t sqrt_list_size(skiplist_t *list)
{
	size_t size = 0;
	skiplist_t *temp = list;

	while (temp)
	{
		size++;
		temp = temp->next;
	}
	return (size > 0 ? sqrt(size) : 1);
}
