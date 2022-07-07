#include "variadic_functions.h"

/**
 * print_numbers - function thats prints numbers followed by a new line
 * @separator: Define the separator for the numbers
 * @n: Define number of arguments.
 * Return: Void variable.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	if (n == 0)
	{
		printf("\n");
		return;
	}
	if (separator == 0)
		separator = "";

	va_start(numbers, n);

	for (i = 0; i < n - 1; i++)
		printf("%d%s", va_arg(numbers, int), separator);

	printf("%d\n", va_arg(numbers, int));

	va_end(numbers);
}
