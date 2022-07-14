#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - check the code for Holberton School students.
 * @argc: num of arguments.
 * @argv: array of strings.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int (*fp)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fp = get_op_func(argv[2]);

	if (fp == NULL || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	if ((argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
	     && argv[2][0] != '/' && argv[2][0] != '%') || strlen(argv[2]) != 1)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", fp(atoi(argv[1]), atoi(argv[3])));

	return (0);
}
