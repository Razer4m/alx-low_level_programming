#include "lists.h"
/**
 * add_node - Adds a new node at the
 * beginning of a lsit_t list.
 * @head: Double pointer to the head of the linked list.
 * @str: POinter to string to be duplicated and added to the new node.
 *
 * Return: the adress of a new ellement, or NULL if it failed.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	while (str[len])
	{
		len++;
	}

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (*head);
}
