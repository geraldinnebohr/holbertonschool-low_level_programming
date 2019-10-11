#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hashtable
 * @key: its the key
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *pocket = ht->array[index];

	if (pocket == NULL || key == NULL)
		return (NULL);

	if (strcmp(key, "") == 0)
		return (NULL);

	while (pocket != NULL)
	{
		if (strcmp(pocket->key, key) == 0)
			return (pocket->value);
		pocket = pocket->next;
	}
	return (NULL);
}
