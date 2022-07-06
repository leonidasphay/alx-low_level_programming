/**
 * int_index - executes a function for search a integer.
 * @array: contains an array of integers.
 * @size: contains a size of the array.
 * @cmp: contains a functions to search a number.
 * Return: a integer value on exit, (-1) in case of error.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (!array || !cmp)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
