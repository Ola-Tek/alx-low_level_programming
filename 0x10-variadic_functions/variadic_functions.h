#ifndef _VARIADIC_FUNCTIONS
#define _VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);

#endif
