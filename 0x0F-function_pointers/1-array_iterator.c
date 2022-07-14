#include <stdlib.h>

/**
 * array_iterator - executes any function.
 * @array: contains an array of integers.
 * @size: contains a size of the array.
 * @action: contains a function to execute.
 * @void function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !size || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
