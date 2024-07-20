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
	skiplist_t *current, *last;

	if (list == NULL)
		return (NULL);

	current = list;

	while (current->express && current->express->n < value)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				current->express->index, current->express->n);
		current = current->express;
	}
	last = current;

	if (current->express == NULL)
	{
		while (current->next)
			current = current->next;
	}
	printf("Value found between indexes [%lu] and [%lu]\n",
			last->index, current->index);

	while (last && last != current->next)
	{
		printf("Value checked at index [%lu] = [%d]\n",
				last->index, last->n);
		if (last->n == value)
			return (last);
		last = last->next;
	}
	return (NULL);
}
