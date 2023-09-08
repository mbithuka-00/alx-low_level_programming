#include "hash_tables.h"

/**
 * hash_djb2 - Computes the hash value of a string using djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The 64-bit hash value.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash = 5381;
    int m;

    while ((m = *str++))
    {
        hash = ((hash << 5) + hash) + m; /* hash * 33 + m */
    }

    return (hash);
}

