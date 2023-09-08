#include "hash_tables.h"

/**
 * hash_table_print - Prints the key-value pairs from a hash table.
 * @ht: A pointer to the hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int m = 0;
    hash_node_t *bucket;
    int not_first = 0;

    if (!ht)
        return;

    printf("{");
    for (m = 0; m < ht->size; m++)
    {
        bucket = ht->array[m];
        while (bucket)
        {
            if (not_first)
                printf(", ");
            printf("'%s': '%s'", bucket->key, bucket->value);
            not_first = 1;
            bucket = bucket->next;
        }
    }
    printf("}\n");
}
