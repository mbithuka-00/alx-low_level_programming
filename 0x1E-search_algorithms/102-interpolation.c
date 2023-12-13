#include "search_algos.h"

/**
  * interpolation_search - Search for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: it points to the first element of the array to search.
  * @size:  number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */

int interpolation_search(int *array, size_t size, int value)
{
	size_t m, l, r;

	/* Check if the array is NULL */
	if (array == NULL)
		return (-1);

	/* Perform interpolation search */
	for (l = 0, r = size - 1; r >= l;)
	{
		i = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", m, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", m);
			break;
		}

		if (array[m] == value)
			return (m);
		if (array[m] > value)
			r = m - 1;
		else
			l = m + 1;
	}

	return (-1);
}
