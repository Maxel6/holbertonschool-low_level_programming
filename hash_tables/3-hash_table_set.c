#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t *) * ht->size);

	if (new == NULL || ht == NULL)
		return (0);
	if (ht->array == NULL)
	{
		free(ht->array);
		return (0);
	}

	new->value = strdup(value);
	new->key = (char *)key;

	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = strdup(value);
			//return (1);
		}
		ht->array[index] = ht->array[index]->next;
	}
	if (ht->array[index])
		new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
