#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure representing a dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Description: This structure represents a dog with a name, age, and owner.
 */
typedef struct dog
{
    char *name;
    float age;
    char *owner;
} dog_t;

/* Function prototypes */
void init_dog(dog_t *d, char *name, float age, char *owner);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
