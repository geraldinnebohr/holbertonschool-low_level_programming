#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 * Return: void function
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i, temp = 0;

	if (ht != NULL)
	{
		printf("{");

		i = 0;
		while (i < ht->size)
		{
			if (ht->array[i] != NULL)
			{
				if (temp == 0)
				{
					printf("'%s': '%s'", ht->array[i]->key,
					       ht->array[i]->value);
					temp = 1;
				}
				else
					printf(", '%s': '%s'", ht->array[i]->key,
					       ht->array[i]->value);
				node = ht->array[i]->next;
				while (node != NULL)
				{
					printf("'%s': '%s'", node->key, node->value);
					node = node->next;
				}
			}
			i++;
		}
		printf("}\n");
	}
}
