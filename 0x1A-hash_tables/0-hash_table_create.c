#include "hash_tables.h"

/**
 * hash_table_create - it  Creates a hash table.
 * @size: The size of  hash table.
 *
 * Return: A pointer to the created hash table, or NULL on failure.
 * auth: matt mbithuka
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *table;

    if (size == 0)
        return (NULL);

    table = calloc(1, sizeof(hash_table_t));
    if (!table)
        return (NULL);

    table->size = size;
    table->array = calloc(size, sizeof(hash_node_t *));
    if (!table->array)
    {
        free(table);
        return (NULL);
    }
    return (table);
}
