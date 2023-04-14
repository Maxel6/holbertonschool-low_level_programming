#include "hash_tables.h"
/**
 * hash_table_set - add an element to the hash table
 *@ht: the hash table you want to add or update the key/value
 *@key: is the key
 *@value: is the value associated with the key
 *Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0, tmp = 0;
	hash_node_t *new;

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));

	if (new == NULL || ht == NULL)
		return (0);
	if (ht->array == NULL)
	{
		free(ht);
		return (0);
	}

	new->value = strdup(value);
	new->key = strdup(key);
	if (new->key == NULL || new->value == NULL)
		return (0);

	if (ht->array[index])
	{
		if (strcmp(key, ht->array[index]->key) == 0)
		{
			ht->array[index]->value = (char *)value;
		}
		else
		{
			tmp = key_index((const unsigned char *)ht->array[index]->key, ht->size);

			if (index == tmp)
				new->next = ht->array[index];
		}
	}
	ht->array[index] = new;
	return (1);
}
