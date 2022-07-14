#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - contains a selector to operate
 * @s: Contains a sign to operate.
 *
 * Return: operation to do.
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	while ((ops[i].op[0] != s[0]) && i < 4)
		i++;

	return (ops[i].f);

}
