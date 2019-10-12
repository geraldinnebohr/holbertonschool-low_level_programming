#include "hash_tables.h"

/**
 *
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht == NULL)
		return;

	printf("{");

	i = 0;
	while (i < ht->size)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			printf("'%s': '%s'", node->key, node->value);
			printf(", ");
			node = node->next;
		}
		i++;
	}
	printf("}\n");
}
