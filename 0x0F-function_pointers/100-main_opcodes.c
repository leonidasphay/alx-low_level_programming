#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes
 * @argv: contains a String
 * @argc: Contains a Integer value
 * Return: 0 on Success, exit whit 1 or two in case of error
 */

int main(int argc, char **argv)
{

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	return (0);
}
