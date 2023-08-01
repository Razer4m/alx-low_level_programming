#include "lists.h"
/**
 * list_len - Counts the number of elements in a linked list.
 * @h: Pointer to the head of the linked list.
 *
 * Return: The number of elements in the linked list.
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		c++;
		current = current->next;
	}
	return (c);
}
