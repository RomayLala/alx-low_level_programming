#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed to it
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
(void)argv; /* We do not need argv for this task */
print_number_of_arguments(argc);
return (0);
}

/**
 * print_number_of_arguments - prints the number of arguments
 * @argc: argument count
 */
void print_number_of_arguments(int argc)
{
printf("%d\n", argc - 1);
}
