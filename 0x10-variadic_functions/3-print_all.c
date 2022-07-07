#include "variadic_functions.h"

/**
 * print_char - prints char
 * @c: Contains a value in a variadic list
 *
 * Return: Void function.
 */

void print_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * print_int - prints int
 * @i: Contains a value in a variadic list
 *
 * Return: Void function.
 */

void print_int(va_list i)
{
	printf("%i", va_arg(i, int));
}

/**
 * print_float - prints float
 * @f: Contains a value in a variadic list
 *
 * Return: Void function.
 */

void print_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_string - prints string
 * @s: Contains a value in a variadic list
 *
 * Return: Void function.
 */

void print_string(va_list s)
{
	char *res;

	res = va_arg(s, char *);
	if (res == 0)
		res = "(nil)";
	printf("%s", res);
}

/**
 * print_all - prints anything
 * @format: list of types of arguments.
 * @...: Arguments.
 *
 * Return: Void function.
 */

void print_all(const char * const format, ...)
{
	print_opc opc[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	int i = 0;
	int j;

	va_list to_print;
	char *coma = "";

	va_start(to_print, format);
	while (format && format[i])
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == opc[j].c[0])
			{
				printf("%s", coma);
				opc[j].f(to_print);
				coma = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(to_print);
}
