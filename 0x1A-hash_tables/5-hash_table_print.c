#include "hash_tables.h"

/**
 * hash_table_print - function prints a hash table
 * @ht: hash table
 * Return: All keys and values in hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int count;
	int flag = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		if (ht->array[count] != NULL)
		{
			temp = ht->array[count];
			while (temp != NULL)
			{
				if (!flag)
					printf(", ");
				printf("'%s': '%s'", temp->key, temp->value);
				flag = 0;
				temp = temp->next;
				if (temp != NULL)
					printf(", ");
			}
		}
	}
	printf("}\n");
}
