#include "hash_tables.h"
/**
 * key_index - Calculates the index for a given key in a hash table array.
 * @key: The key for which to calculate the index.
 * @size: The size of the hash table array.
 *
 * Return: The calculated index for the key in the hash table array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
