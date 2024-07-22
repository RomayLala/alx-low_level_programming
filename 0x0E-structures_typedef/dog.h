#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's basic info
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: This structure holds the basic information about a dog.
 */
struct dog
{
char *name;
float age;
char *owner;
};

/* Function prototype */
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_H */
