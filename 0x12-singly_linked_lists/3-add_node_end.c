#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: Pointer to the string to be duplicated and added to the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	while (str[len])
	{
		len++;
	}
	if (str == NULL)
	{
		return (NULL);
	}
	
	new_node = malloc(sizeof(list_t));
	
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	else
	{
		list_t *current = *head;

		while (current->next)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
