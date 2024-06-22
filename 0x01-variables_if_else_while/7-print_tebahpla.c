#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the lowercase alphabet in reverse using putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'z'; /* Start with 'z', the last lowercase letter */

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }
    putchar('\n'); /* Print a new line after printing the alphabet */

    return (0);
}
