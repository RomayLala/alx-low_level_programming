#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char leet_map[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char leet_replace[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (str[i])
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == leet_map[j])
			{
				str[i] = leet_replace[j];
				break;
			}
			j++;
		}
		i++;
	}

	return (str);
}
