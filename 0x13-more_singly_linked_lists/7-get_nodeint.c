#include "lists.h"
/**
 * get_nodeint_at_index - Returns the nth node of a listin_t linked list.
 * @head: POinter to the head of the list
 * @index: of the node, string at 0
 * Return: Pointer to the nth node. Null if node doesnt esxist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *c = head;
	unsigned int counter = 0;

	while (c != NULL)
	{
		if (counter == index)
		{
			return (c);
		}
		counter++;
		c = c->next;
	}
	return (NULL);
}
