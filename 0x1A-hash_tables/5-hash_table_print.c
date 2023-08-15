#include "hash_tables.h"

/**
 * hash_table_print - prints the key:value from ht
 * @ht: pointer to hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t  *current_node;
	int pair = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current_node = ht->array[index];
		while (current_node)
		{
			if (pair)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);
			pair = 1;
			current_node = current_node->next;
		}
	}
	printf("}\n");
}
