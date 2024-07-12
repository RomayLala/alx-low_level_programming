#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * add_positive_numbers - Adds positive numbers passed as arguments.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: The sum of the positive numbers or an error message.
 */
int add_positive_numbers(int argc, char *argv[])
{
int sum = 0;
int i;

if (argc == 1)
{
printf("0\n");
return (0);
}

for (i = 1; i < argc; i++)
{
char *ptr = argv[i];
int num = 0;

while (*ptr)
{
if (*ptr < '0' || *ptr > '9')
{
printf("Error\n");
return (1);
}
num = num * 10 + (*ptr - '0');
ptr++;
}
sum += num;
}

printf("%d\n", sum);
return (0);
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
return (add_positive_numbers(argc, argv));
}
