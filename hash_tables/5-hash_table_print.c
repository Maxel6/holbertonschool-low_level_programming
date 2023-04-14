#include "hash_tables.h"

/**
 * hash_table_print - Print an hash table
 * @ht: Hash table to print
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	char *comma = "";

	if (ht)
	{
		printf("{");
		for (i = 0; i < ht->size; i++)
		{
			while (ht->array[i])
			{
				printf("%s'%s': '%s'", comma, ht->array[i]->key, ht->array[i]->value);
				ht->array[i] = ht->array[i]->next;
				comma = ", ";
			}
		}
		printf("}\n");
	}
}
