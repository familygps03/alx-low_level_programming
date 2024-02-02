#include "hash_tables.h"
/**
 * hash_table_create - Function that creates a hash table.
 *
 * If an error occurs, the function should return NULL.
 *
 * @size: Size of the hash table/array.
 * Return: Pointer to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new = NULL;

	if (size == 0)
		return (NULL);

	new = malloc(sizeof(hash_table_t));
	if (new == NULL)
		return (NULL);
	new->size = size;
	new->array = malloc(sizeof(hash_node_t *) * size);
	if (new->array == NULL)
		return (NULL);
	while (i < size)
	{
		new->array[i] = NULL;
		i++;
	}
	return (new);
}
