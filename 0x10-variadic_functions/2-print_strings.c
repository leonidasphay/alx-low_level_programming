#include "variadic_functions.h"

/**
 * print_strings - function thats prints Strings followed by a new line
 * @separator: Define the separator for the numbers
 * @n: Define number of arguments.
 * Return: Void variable.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *word_v;
	unsigned int i;
	va_list word;

	va_start(word, n);

	for (i = 0; i < n; i++)
	{
		word_v = va_arg(word, char*);

		word_v != NULL ? printf("%s", word_v) : printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(word);
}
