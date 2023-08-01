#include "lists.h"
/**
 * free_listint - Frees a listint_list
 * @head: Pointer of the head of listint_t list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
