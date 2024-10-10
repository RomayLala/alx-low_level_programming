#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>

/**
 * hash_table_set - Adds or updates an element in a hash table.
 * @ht: The hash table.
 * @key: The key, which cannot be an empty string.
 * @value: The value associated with the key. Must be duplicated.
 *
 * Return: 1 on success, 0 on failure.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *temp;
    char *dup_value;

    if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
        return (0);

    /* Duplicate the value to avoid modifying the original */
    dup_value = strdup(value);
    if (dup_value == NULL)
        return (0);

    /* Get the index for the key */
    index = key_index((const unsigned char *)key, ht->size);

    /* Check if key already exists in the list */
    temp = ht->array[index];
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            /* Key exists, update value */
            free(temp->value);
            temp->value = dup_value;
            return (1);
        }
        temp = temp->next;
    }

    /* Key doesn't exist, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
    {
        free(dup_value);
        return (0);
    }

    /* Initialize the new node */
    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(dup_value);
        free(new_node);
        return (0);
    }
    new_node->value = dup_value;
    new_node->next = ht->array[index]; /* Insert at the beginning */
    ht->array[index] = new_node;

    return (1);
}
