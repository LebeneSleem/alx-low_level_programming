#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the hash table to look into
 * @key: Key to be retrieved
 * Return: Value associated with the key, or NULL if key cannot be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node != NULL)
	{
		if (strcmp(key, current_node->key) == 0)
			return (current_node->value);
		current_node = current_node->next;
	}

	return (NULL);
}
