#include "lists.h"
/**
 * listint_len - Returns number of the elements in a linked listint_t list.
 * @h: Pointer to the headd of the listint_t list.
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter)
}
