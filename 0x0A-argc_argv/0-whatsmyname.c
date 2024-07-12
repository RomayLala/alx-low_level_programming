#include <stdio.h>
#include "main.h"

/**
 * main - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		print_program_name(argv[0]);
	}
	return (0);
}

/**
 * print_program_name - prints the name of the program
 * @program_name: name of the program
 */
void print_program_name(char *program_name)
{
	printf("%s\n", program_name);
}
