/* 100-get_endianness.c */
#include "main.h"

/**
 * get_endianness - Checks the endianness of the system.
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
    unsigned int x = 1;
    char *c = (char *)&x;

    return (*c == 1);
}
