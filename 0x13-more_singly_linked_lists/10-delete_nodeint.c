#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes the node at a given
 * index of a listint_t list.
 * @head: Pointer to a pointer to the head of the listint_t list.
 * @index: Index of the node to be deleted. Index starts at 0.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *prev;
	unsigned int counter = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = temp->next;
		free(temp);
		return (1);
	}
	prev = *head;
	temp = (*head)->next;

	while (temp != NULL && counter < index)
	{

		prev = temp;
		temp = temp->next;
		counter++;
	}
	if (temp == NULL)
	{
		return (-1);
	}
	prev->next = temp->next;
	free(temp);
	return (1);
}
