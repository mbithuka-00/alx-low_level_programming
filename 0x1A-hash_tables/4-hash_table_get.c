#include "hash_tables.h"

/**
 * hash_table_get - Retrieves the value associated with a given key.
 * @ht: A pointer to the hash table.
 * @key: The key to retrieve the value.
 *
 * Return: The value associated with the key, or NULL if the key does not exist.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;  
    hash_node_t *bucket;

    if (!ht || !key || !*key)
        return (NULL);

    index = key_index((const unsigned char *)key, ht->size);  
    bucket = ht->array[index];

    while (bucket)
    {
        if (!strcmp(key, bucket->key))
            return (bucket->value);
        bucket = bucket->next;
    }

    return (NULL);
}
