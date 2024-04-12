#include "hash_tables.h"
/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the newly created sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;
	unsigned long int i;

	new_table = malloc(sizeof(shash_table_t));

	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		new_table->array[i] = NULL;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds or updates a key-value pair in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to be added or updated.
 * @value: The value associated with the key.
 *
 * Return: 1 on success, 0 on failure.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

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
 * shash_table_get - Retrieves the value associated with a key in a sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key to search for.
 *
 * Return: The value associated with the key, or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (NULL);
	}
	index = hash_djb2((const unsigned char *)key) % ht->size;
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			return (current->value);
		}
		current = current->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the key/value pairs in a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	current = ht->shead;

	while (current != NULL)
	{
		printf("'%s': '%s'", current->key, current->value);

		if (current->snext != NULL)
		{
			printf(", ");
		}
		current = current->snext;
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints the key/value pairs in reverse order in a sorted hash table.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
	{
		return;
	}
	
	printf("{");
	current = ht->stail;

	while (current != NULL)
	{

		printf("'%s': '%s'", current->key, current->value);

		if (current->sprev != NULL)
		{
			printf(", ");
		}
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table and its elements.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *current, *next;

	if (ht == NULL)
	{
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			next = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = next;
		}
	}
	free(ht->array);
	free(ht);
}
