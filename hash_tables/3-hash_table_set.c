#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new;
	char *cp_value = strdup(value);
	int i = 0;

	new = malloc(sizeof(hash_node_t *) * ht->size);
	if (ht->array[index] == NULL)
		return (0);
	new->value = cp_value;
	new->key = (char *)key;

	while (ht->array[index]->next)
	{
		if (strcmp(ht->array[index]->key, key) == 0)
		{
			free(ht->array[index]->value);
			ht->array[index]->value = cp_value;
			return (1);
		}
		ht->array[index] = ht->array[index]->next;   
	}
	if (ht->array[index])
		new->next = ht->array[index];
	ht->array[index] = new;

	free(cp_value);
	return (1);
}
