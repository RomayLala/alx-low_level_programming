#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Reallocate a memory block using malloc and free
 * @ptr: Pointer to the memory previously allocated with malloc(old_size)
 * @old_size: Size of the allocated space for ptr
 * @new_size: New size of the memory block in bytes
 *
 * Return: Pointer to the newly allocated memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
    void *new_ptr;
    unsigned int min_size;

    if (new_size == old_size)
        return ptr;

    if (!ptr)
        return malloc(new_size);

    if (new_size == 0)
    {
        free(ptr);
        return NULL;
    }

    min_size = (old_size < new_size) ? old_size : new_size;
    new_ptr = malloc(new_size);
    if (!new_ptr)
        return NULL;

    while (min_size--)
        *((char *)new_ptr + min_size) = *((char *)ptr + min_size);

    free(ptr);
    return new_ptr;
}
