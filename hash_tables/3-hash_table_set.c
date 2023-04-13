#include "hash_tables.h"

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index = key_index((const unsigned char *)key, ht->size);
    hash_node_t * new;
    char *cp_value = strdup(value);
    int i = 0;

    new = malloc(sizeof(hash_node_t *) * ht->size);
    if (ht->array[index] == NULL)
            return (0);
    new->value = cp_value;
    new->key = (char *)key;

    if (!(ht->array[index]))
    {
        ht->array[index] = new;
    }
    else
    {
        while (ht->array[i])
        {
            if (strcmp(ht->array[i]->key, key) == 0)
            {
                ht->array[i]->value = cp_value;
            }
            else
            {
                new->next = ht->array[i];
                ht->array[i] = new;
            }
            ht->array[i] = ht->array[i]->next;
        }
    }

    free(cp_value);
    return (1);
}
