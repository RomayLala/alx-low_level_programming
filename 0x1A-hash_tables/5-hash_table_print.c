#include "hash_tables.h"
#include <stdio.h>

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table to print.
 *
 * Description: This function prints all the key/value pairs in the hash table
 * in the order they appear in the array of the hash table. It uses a chaining
 * collision handling method. If the hash table is NULL, it prints nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *node;
    int first = 1;

    if (ht == NULL)
        return;

    printf("{");

    /* Loop through the hash table array */
    for (i = 0; i < ht->size; i++)
    {
        node = ht->array[i];

        /* Traverse each linked list at this index */
        while (node != NULL)
        {
            if (!first)
                printf(", ");

            printf("'%s': '%s'", node->key, node->value);
            first = 0;

            node = node->next;
        }
    }

    printf("}\n");
}
