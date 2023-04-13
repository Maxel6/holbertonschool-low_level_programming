#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    if (!(ht->array[index]))
    {
        ht->array[index] = malloc(sizeof(hash_node_t *) * ht->size);
        if (ht->array[index] == NULL)
            return (0);
    }
    ht->array[index]->value = (char *)value;
    return (0);
}
