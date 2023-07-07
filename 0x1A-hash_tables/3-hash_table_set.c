#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element
 * to the hash table
 * @ht: hash table to add to
 * @key: key
 * @value: value associated with key
 * Return: 1 if successfull and 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_hash_node, *temp;
	unsigned int index;
	char *value_dup;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);
	value_dup = strdup(value);
	if (value_dup == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = value_dup;
			return (1);
		}
		temp = temp->next;
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (new_hash_node == NULL)
	{
		free(value_dup);
		return (0);
	}
	new_hash_node->key = strdup(key);
	new_hash_node->value = value_dup;
	if (new_hash_node == NULL || new_hash_node->value == NULL)
	{
		free(new_hash_node->key);
		free(new_hash_node->value);
		free(new_hash_node);
		return (0);
	}
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
