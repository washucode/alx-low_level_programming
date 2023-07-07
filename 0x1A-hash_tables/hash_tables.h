#ifndef _HASH_TABLES_H_
#define _HASH_TABLES_H_

#include <stdlib.h>
#include <stdio.h>
#include <string.h>


/* Structures */
/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string
 * The key is unique in the HashTable
 * @value: The value, string
 * @next: A pointer to the next node of the list
 * @index: The index of the array of the hash table
 * @array: The array of the hash table
 */

typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
    unsigned long int index;
    struct hash_node_s **array;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size
 * Each cell of this array is a pointer to the first node of a linked list,
 * because we want our HashTable to use a Chaining collision handling
 */

typedef struct hash_table_s
{
    unsigned long int size;
    struct hash_node_s **array;
} hash_table_t;





/* Prototypes */
hash_table_t *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
hash_node_t *create_node(const char *key, const char *value, unsigned long int index, hash_node_t **array);
int hash_table_set(hash_table_t *ht, const char *key, const char *value);
void hash_table_print(const hash_table_t *ht);
void hash_table_delete(hash_table_t *ht);
char *hash_table_get(const hash_table_t *ht, const char *key);


#endif /* _HASH_TABLES_H_ */
