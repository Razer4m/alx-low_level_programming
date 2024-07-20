#include "search_algos.h"


/**
 * jump_list - searches for a value in a sorted singly linked list
 *             using the Jump search algorithm.
 *
 * @list: pointer to the head of the list to search in
 * @size: number of nodes in the list
 * @value: value to search for
 *
 * Return: pointer to the first node where val loc or NULL if not found
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev;
	listint_t *current, *jump;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	prev = 0;

	while (current->index + step < size && current->n < value)
	{
		prev = current->index;
		jump = current;

		for (size_t i = 0; i < step && jump->next; i++)
			jump = jump->next;

		printf("Value checked at index [%lu] = [%d]\n", jump->index, jump->n);
		if (jump->n >= value)
			break;

		current = jump;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, jump->index);

	while (current && current->index <= jump->index)
	{
		printf("Value checked at index [%lu] = [%d]\n", current->index, current->n);
		if (current->n == value)
			return (current);
		current = current->next;
	}
	return (NULL);
}
