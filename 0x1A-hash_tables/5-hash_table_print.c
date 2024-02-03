#include "hash_tables.h"

/**
 * hash_table_print - Prints the elements of a hash table.
 * @ht: A pointer to the hash table to be printed.
 *
 * Return: No return value.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current_node;
	unsigned long int index = 0, count = 0;

	if (ht == NULL)
		return;

	printf("{");

	for (index = count; index < ht->size; index++)
	{
		if (ht->array[index] != NULL)
		{
		current_node = ht->array[index];
		while (current_node)
		{
			printf("%s'%s': '%s'", count == 0 ? "" : ", ",
			current_node->key, current_node->value);
			count++;
			current_node = current_node->next;
		}
		}
	}

	printf("}\n");
}
