#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			tmp = ht->array[i];
			while (tmp != NULL)
			{
				node = tmp->next;
				free(tmp->key);
				free(tmp->value);
				free(tmp);
				tmp = node;
			}
			ht->array[i] = NULL;
		}
		free(ht->array[i]);
	}
	free(ht->array);
	free(ht);
}
