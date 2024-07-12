#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point of the program
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int cents, coins;

if (argc != 2)
{
printf("Error\n");
return (1);
}

cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}

coins = min_coins(cents);
printf("%d\n", coins);
return (0);
}

/**
 * min_coins - Calculates the minimum number of coins
 * @cents: The amount of cents
 *
 * Return: Minimum number of coins
 */
int min_coins(int cents)
{
int coins = 0;
int coin_values[] = {25, 10, 5, 2, 1};
int i;

for (i = 0; i < 5; i++)
{
while (cents >= coin_values[i])
{
cents -= coin_values[i];
coins++;
}
}

return (coins);
}
