#include "hash_tables.h"

/**
 * hash_table_create - Create a new hash table
 * @size: Size of the array
 * Return: Pointer to the new hash table,
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hew_table;

	if (size == 0)
		return (NULL);
	new_table = malloc(1 * sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
