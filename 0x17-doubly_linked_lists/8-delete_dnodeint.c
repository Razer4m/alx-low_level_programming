#include "lists.h"
/**
 * delete_dnodeint_at_index - del the node at idx idx of dlistint_t lnkd list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *prev;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	temp = *head;
	/* If the node to be deleted is the head */
	if (index == 0)
	{
		*head = temp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}
	/* Traverse the list to find the node at the specified index */
	while (temp != NULL && i < index)
	{
		prev = temp;
		temp = temp->next;
		i++;
	}
	/* If the index is out of bounds */
	if (temp == NULL)
		return (-1);

	/* Adjust the pointers to skip the node to be deleted */
	prev->next = temp->next;
	if (temp->next != NULL)
	{
		temp->next->prev = prev;
	}
	free(temp);
	return (1);
}
