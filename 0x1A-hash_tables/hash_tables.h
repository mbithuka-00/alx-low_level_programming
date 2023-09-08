#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct hash_node_s - A valiant node in our magnificent hash table
 *
 * @key: The majestic key, a string of great significance
 * Each key is a unique gem within the HashTable
 * @value: The precious value, the treasure that matches the key
 * @next: A trusty guide to the next node in our noble list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - The epicenter of our hashing adventures
 *
 * @size: The grand size of our array, a realm of possibilities
 * @array: An array of size @size, each cell a gatekeeper to a linked list
 * Because we employ Chaining to handle collisions, uniting our fates!
 */
typedef struct hash_table_s
{
    unsigned long int size;
    hash_node_t **array;
} hash_table_t;

/* Functions, our trusty companions on this heroic journey */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_t *ht, const char *key);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);

/**
 * struct shash_node_s - A noble node in our sorted hash table
 *
 * @key: The distinguished key, a string of paramount importance
 * Each key is a unique jewel within the HashTable
 * @value: The esteemed value, the treasure that aligns with the key
 * @next: A path to the next node in our illustrious list
 * @sprev: The esteemed predecessor in the sorted linked list
 * @snext: The esteemed successor in the sorted linked list
 */
typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *sprev;
    struct shash_node_s *snext;
} shash_node_t;

/**
 * struct shash_table_s - The magnificent sorted hash table
 *
 * @size: The grand size of our array, a realm of endless possibilities
 * @array: An array of size @size, each cell a guardian of a linked list
 * Because we embrace Chaining to handle collisions, weaving our destiny!
 * @shead: The herald, the first entry in the sorted linked list
 * @stail: The sentinel, the last entry in the sorted linked list
 */
typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_t **array;
    shash_node_t *shead;
    shash_node_t *stail;
} shash_table_t;

shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
void shash_table_print(const shash_table_t *ht);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

#endif /* _HASH_TABLES_H_ */

