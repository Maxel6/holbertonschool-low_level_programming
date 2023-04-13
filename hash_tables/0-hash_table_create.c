#include "hash_tables.h"
/**
 * hash_table_create - create a new hash table
 * @size: the size of the hash table array
 * Return: a pointer to the new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = malloc(sizeof(hash_table_t));
	unsigned long int i = 0;

	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	while (i < size)
	{
		ht->array[i] = NULL;
		i++;
	}

	return (ht);
}
