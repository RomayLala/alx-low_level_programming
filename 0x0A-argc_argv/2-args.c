#include <stdio.h>
#include "main.h"

/**
 * main - Prints all arguments it receives
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	print_args(argc, argv);
	return (0);
}

/**
 * print_args - Prints each argument on a new line
 * @argc: The number of arguments
 * @argv: The array of arguments
 */
void print_args(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
