#include "hash_tables.h"

/**
 * key_index - Obtain the index of a key in a hash table array.
 * @key: Pointer to the key to calculate the index.
 * @size: Size of the array of the hash table.
 *
 * Utilizes the hash_djb2 function.
 *
 * Return: The index at which the key/value pair should be stored
 *         in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
