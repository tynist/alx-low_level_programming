#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of the array
 * Return: Pointer to the new hash table
 * 			otherwise NULL = failiure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *new_ht = malloc(sizeof(hash_table_t));

	if (!new_ht)
		return (NULL);

	new_ht->size = size;

	new_ht->array = malloc(sizeof(hash_node_t *) * size);
	if (!new_ht->array)
	{
		free(new_ht);
		return (NULL);
	}

	for (; i < size; i++)
		new_ht->array[i] = NULL;

	return (new_ht);
}