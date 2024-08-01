#include "lists.h"
#include <stdio.h> /* For printf */

/* Function to be executed before main */
void print_message(void) __attribute__((constructor));

/**
 * print_message - prints a specific message before main is executed
 */
void print_message(void)
{
    printf("You're beat! and yet, you must allow,\n");
    printf("I bore my house upon my back!\n");
}
