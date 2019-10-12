#include "hash_tables.h"
/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table
 * @key: current key
 * @value: value associated with the key
 * Return: 1 if succeed or 0 if not
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *pocket, *new;

	if (key == NULL || strcmp(key, "") == 0)
		return (0);

	if (ht == NULL)
		return (0);

	if (value == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	pocket = malloc(sizeof(hash_node_t));

	if (pocket == NULL)
		return (0);
	pocket->key = strdup(key);
	pocket->value = strdup(value);
	pocket->next = ht->array[index];
	ht->array[index] = pocket;
	return (1);

	new = ht->array[index];
	while (new != NULL)
	{
		if (strcmp(new->key, key) == 0)
		{
			free(new->value);
			new->value = strdup(value);
			return (1);
		}
		new = new->next;
	}
}
