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
	if (str == NULL)
	{
		return (NULL);
	}
	list_t *new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	char *dup_str = strdup(str);
	if (dup_str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	unsigned int len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new_node->str = dup_str;
	new_node->len = len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
