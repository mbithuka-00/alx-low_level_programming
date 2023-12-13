#include "search_algos.h"

/**
 * linear_search - Searches for value in an array
 *                 of integers using linear search.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: If the value is not present or the array is NULL, -1.
 *         Otherwise, the first index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t m;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Iterate over each element of the array */
	for (m = 0; m < size; m++)
	{
		/* Print the value being checked */
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);

		/* If the value is found */
		if (array[m] == value)

			/* Return the index of the value */
			return (m);
	}

	/* Value not found, return -1 */
	return (-1);
}
