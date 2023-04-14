#include "hash_tables.h"
/**
 * hash_table_get - retrieve a value associated with a key
 * @ht: the hash table
 * @key: the key to check
 * Return: the value of associated to the key, 0 otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	char *value = NULL;
	unsigned long int index;

	if (!ht)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	while (ht->array[index])
	{
		if (strcmp(ht->array[index]->key, key) == 0)
			value = ht->array[index]->value;
		ht->array[index] = ht->array[index]->next;
	}
	return (value);
}
