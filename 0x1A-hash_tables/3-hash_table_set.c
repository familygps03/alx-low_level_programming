#include "hash_tables.h"

hash_node_t *create_node(const char *key, const char *value);

/**
 * hash_table_set - Add or update an element in the hash table.
 * @ht: Pointer to the hash table to add or update the key/value.
 * @key: Pointer to the key; cannot be an empty string.
 * @value: Pointer to the value associated with the key.
 *
 * The value must be duplicated, and it can be an empty string.
 * In case of a collision, add the new_node node at the beginning of the list.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current_node = NULL;
	unsigned long int i;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
	return (0);
	i = key_index((unsigned char *)key, ht->size);
	current_node = ht->array[i];

	for (; current_node != NULL; current_node = current_node->next)
	{
	if (strcmp(current_node->key, key) == 0)
	{
		if (strcmp(current_node->value, value) != 0)
	{
		free(current_node->value);
		current_node->value = strdup(value);
	}
		return (1);
	}
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
	return (0);

	new_node->next = ht->array[i];
	ht->array[i] = new_node;
	return (1);
}

/**
 * create_node - Create a new_node node.
 * @key: Pointer to the key.
 * @value: Pointer to the value associated with the key.
 *
 * Return: Pointer to the new_node node or NULL on failure.
 */
hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	if (key == NULL || strcmp(key, "") == 0 || value == NULL)
	return (NULL);

	new_node = malloc(sizeof(hash_node_t));

	if (new_node == NULL)
		return (NULL);

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

/**
 * Note: If you want to test for collisions, here are some strings
 * that collide using the djb2 algorithm:
 *
 * hetairas collides with mentioner
 * heliotropes collides with neurospora
 * depravement collides with serafins
 * stylist collides with subgenera
 * joyful collides with synaphea
 * redescribed collides with urites
 * dram collides with vivency
 */
