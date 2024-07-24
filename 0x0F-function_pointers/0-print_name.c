#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function
 * @name: The name to be printed
 * @f: Pointer to the callback function
 *
 * Description: This function takes a name and a function pointer,
 * and uses the function pointer to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
if (name && f)
f(name);
}

