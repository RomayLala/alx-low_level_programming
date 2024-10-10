#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_get - Retrieve a value associated with a key in a hash table.
 * @ht: The hash table to search in.
 * @key: The key to look for.
 *
 * Return: The value associated with the key, or NULL if the key couldn't be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
    unsigned long int index;
    hash_node_t *node;

    /* Check for NULL input */
    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (NULL);

    /* Get the index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Traverse the linked list at the index */
    node = ht->array[index];
    while (node != NULL)
    {
        if (strcmp(node->key, key) == 0) /* Compare keys */
            return (node->value); /* Return value if keys match */
        node = node->next; /* Move to the next node */
    }

    /* Key not found */
    return (NULL);
}
