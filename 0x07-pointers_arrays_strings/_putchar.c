#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
<<<<<<< HEAD
	return (write(1, &c, 1));
=======
return (write(1, &c, 1));
>>>>>>> b75065fee8fe53cdcc90b5d3f44b6ac47735d1ef
}
