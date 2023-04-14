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
	hash_node_t *new, *head;

	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));

	if (new == NULL || ht == NULL)
		return (0);
	if (ht->array == NULL)
	{
		return (0);
	}

	new->value = strdup(value);
	new->key = (char *)key;


	//head = ht->array[index];
	if (ht->array[index])
	{
		tmp = key_index((const unsigned char *) ht->array[index]->key, ht->size);

		if (index == tmp)
			new->next = ht->array[index];
	}
	ht->array[index] = new;
	return (1);
}
