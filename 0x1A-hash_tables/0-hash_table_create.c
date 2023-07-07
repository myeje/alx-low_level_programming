#include "hash_tables.h"

/**
 * hash_table_create - Function that creates a hash table
 * @size: size of array
 * Return: a pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int count = 0;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
		free(hash_table);
	}

	hash_table->size = size;
	hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
	{
		return (NULL);
		free(hash_table->array);
	}
	for (; count < size; count++)
		hash_table->array[count] = NULL;

	return (hash_table);
}
