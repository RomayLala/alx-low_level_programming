#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>
#include <stdio.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_number(int num);
void print_separator(const char *separator);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif /* VARIADIC_FUNCTIONS_H */
