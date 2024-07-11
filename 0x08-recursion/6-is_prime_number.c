/* main.h */
#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int is_prime_number(int n);

#endif /* MAIN_H */

/* 6-is_prime_number.c */
#include "main.h"

/**
 * is_divisible - checks if n is divisible by any number from i upwards
 * @n: the number to check
 * @i: the divisor to start checking from
 *
 * Return: 1 if not divisible, 0 if divisible
 */
int is_divisible(int n, int i)
{
    if (i * i > n) /* Base case: no divisors found */
        return 1;
    if (n % i == 0) /* Found a divisor */
        return 0;
    return is_divisible(n, i + 1); /* Check next number */
}

/**
 * is_prime_number - checks if a number is prime
 * @n: the number to check
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
    if (n <= 1) /* Numbers less than or equal to 1 are not prime */
        return 0;
    if (n <= 3) /* 2 and 3 are prime */
        return 1;
    if (n % 2 == 0 || n % 3 == 0) /* Numbers divisible by 2 or 3 are not prime */
        return 0;
    return is_divisible(n, 5); /* Check divisibility from 5 onwards */
}
