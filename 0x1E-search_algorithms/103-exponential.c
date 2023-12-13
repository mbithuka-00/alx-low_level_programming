#include "search_algos.h"
/**
  * _binary_search - Searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: points to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t m;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (m = left; m < right; m++)
			printf("%d, ", array[m]);
		printf("%d\n", array[m]);
		/* Calculates middle index */
		m = left + (right - left) / 2;

		/* If the middle element is the value */
		if (array[m] == value)
			/* Return the index */
			return (m);
		/* If the middle element is greater than the value */
		if (array[m] > value)
			/* Update the right boundary */
			right = m - 1;
		else
			/* Otherwise, update the left boundary */
			left = m + 1;
	}

	/* Value not found, return -1 */
	return (-1);
}

/**
  * exponential_search - Searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t m = 0, right;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);
	/* Perform exponential search if the first element is not the target value */
	if (array[0] != value)
	{
		for (m = 1; m < size && array[m] <= value; m = m * 2)
			printf("Value checked array[%ld] = [%d]\n", m, array[m]);
	}
	/* Determine the range where the value is expected to be found */
	right = m < size ? m : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", m / 2, right);
	/* Perform binary search within the identified range */
	return (_binary_search(array, m / 2, right, value));
}
