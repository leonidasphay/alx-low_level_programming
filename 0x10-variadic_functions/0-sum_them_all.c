#include "variadic_functions.h"

/**
 * sum_them_all - this function sum all parameters.
 *
 * @n: this value reprsents the numbers of args to arrive in the function.
 *
 * Return: 0 in case haven't arguments, sum of all arguments in case of
 * have arguments.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);
	return (sum);
}
