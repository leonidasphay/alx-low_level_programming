#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - math operation.
 * @a: integer value.
 * @b: integer value.
 * Return: sum numbers.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - math operation.
 * @a: integer value.
 * @b: integer value.
 * Return: substract numbers.
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - math operation.
 * @a: integer value.
 * @b: integer value.
 * Return: multiply numbers.
 */


int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - math operation.
 * @a: integer value.
 * @b: integer value.
 * Return: divide numbers.
 */


int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - math operation.
 * @a: integer value.
 * @b: integer value.
 * Return: module in two numbers.
 */


int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
