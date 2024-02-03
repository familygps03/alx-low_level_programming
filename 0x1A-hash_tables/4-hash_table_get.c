#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with
 * a key in the hash table.
 * @ht: A pointer to the hash table to look into.
 * @key: A pointer to the key to search for.
 *
 * Return: The value associated with the element, or NULL if not found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL)
	return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	for (; current_node != NULL; current_node = current_node->next)
	{
		if (strcmp(current_node->key, key) == 0)
		return (current_node->value);
	}
	return (NULL);
}
