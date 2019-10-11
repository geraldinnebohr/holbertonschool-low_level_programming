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

	index = key_index((unsigned char *)key, ht->size);
	pocket = ht->array[index];
	if (pocket == NULL)
	{
		pocket = malloc(sizeof(hash_node_t *));
		if (pocket == NULL)
			return (0);
		pocket->key = (char *)key;
		pocket->value = (char *)value;
		pocket->next = NULL;
		ht->array[index] = pocket;
		return (1);
	}
	while (pocket->next != NULL)
	{
		if (strcmp(pocket->key, key) == 0)
		{
			free(pocket->value);
			pocket->value = malloc(strlen(value) + 1);
			strcpy(pocket->value, value);
			return (1);
		}
		pocket = pocket->next;
	}
	new = malloc(sizeof(hash_node_t *));
	if (new == NULL)
		return (0);
	new->next = pocket;
	pocket->next = NULL;
	ht->array[index] = new;
	new->key = (char *)key;
	new->value = (char *)value;
	return (1);
}
