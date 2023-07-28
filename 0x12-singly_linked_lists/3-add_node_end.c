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
	new_node->str = dup_str;
	new_node->len = 0;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
	}
	else
	{
		list_t *current = *head;
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
	}
	return (new_node);
}
