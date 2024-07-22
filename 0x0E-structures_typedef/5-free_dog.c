#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees a dog structure
 * @d: Pointer to the dog structure to be freed
 *
 * Description: This function frees the memory allocated for the dog
 * structure and its string members.
 */
void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
