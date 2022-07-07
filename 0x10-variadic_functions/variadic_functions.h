#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /*VARIADIC_FUNCTIONS*/

#ifndef STRUCTS
#define STRUCTS

/**
 * struct op - Struct for option.
 *
 * @c: String.
 * @f: Pointer to function.
 */

typedef struct op
{
	char *c;
	void (*f)(va_list);
} print_opc;

#endif  /* STRUCT_FOR_PRINTF_:v */
