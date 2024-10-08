#include "hash_tables.h"

/**
 * key_index - Gives the index of a key
 * @key: The key to get the index of
 * @size: The size of the hash table array
 *
 * Return: The index at which the key/value pair should be stored
 *         in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int hash_value;

    /* Calculate the hash value using hash_djb2 */
    hash_value = hash_djb2(key);

    /* Return the index within the bounds of the array */
    return (hash_value % size);
}
