#include "hash_tables.h"
/**
 * hash_table_set - Adds or updates a key-value pair in a hash table.
 * @ht: The hash table to add or update the key-value pair.
 * @key: The key to be added or updated. Must not be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;

	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
			{
				return (0);
			}
			return (1);
		}
		current = current->next;
	}
	new_node = create_node(key, value);

	if (new_node == NULL)
	{
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
/**
 * create_node - Creates a new hash node and initializes its key and value.
 * @key: The key for the new node.
 * @value: The value associated with the key for the new node.
 *
 * Return: A pointer to the newly created hash node, or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);

		return (NULL);
	}
	new_node->next = NULL;
	return (new_node);
}
