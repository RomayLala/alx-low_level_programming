#include "dog.h"

/* Define NULL if not defined */
#ifndef NULL
#define NULL ((void *)0)
#endif

/**
 * init_dog - initializes a variable of type struct dog
 * @d: pointer to struct dog to initialize
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: Initializes the members of the struct dog with
 * provided values.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
