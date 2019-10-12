#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hashtable
 * @key: its the key
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *pocket;

	if (ht == NULL || key == NULL)
		return (NULL);

	if (strcmp(key, "") == 0)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	pocket = ht->array[index];

	while (pocket != NULL)
	{
		if (strcmp(pocket->key, key) == 0)
			return (pocket->value);
		pocket = pocket->next;
	}
	return (NULL);
}
