#include "search_algos.h"

/**
 * _advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int *_advanced_binary(int *array, size_t size, int value)
{
	size_t m = 0;

	if (!size || !array)
		return (NULL);
	for (printf("Searching in array: "); m < size; m++)
		printf("%d%s", array[m], m + 1 == size ? "\n" : ", ");

	i = (size - 1) / 2;
	if (array[m] == value)
	{
		if (m)
			return (_advanced_binary(array, m + 1, value));
		return (array + m);
	}
	else if (array[m] > value)
		return (_advanced_binary(array, m + 1, value));
	else
		return (_advanced_binary(array + m + 1, size - m - 1, value));
}

/**
 * advanced_binary - performs advanced binary search
 * @array: the integer array
 * @size: its size
 * @value: value to search for
 *
 * Return: the index found or -1
 */
int advanced_binary(int *array, size_t size, int value)
{
	int *a = _advanced_binary(array, size, value);

	if (!a)
		return (-1);
	else
		return (a - array);
}
