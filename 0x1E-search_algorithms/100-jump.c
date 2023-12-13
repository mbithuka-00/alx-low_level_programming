#include "search_algos.h"
/**
  * jump_search - Searches for value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the first index where the value is located.
  */

int jump_search(int *array, size_t size, int value)
{
	size_t m, jump, step;

	/* Check if the array is NULL or empty */
	if (array == NULL || size == 0)
		return (-1);

	/* Calculate the jump step size */
	step = sqrt(size);

	/* Perform the jump search */
	for (m = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);

		/* Store the previous jump position */
		m = jump;

		/* Update the jump position */
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", m, jump);

	/* Adjust the jump position */
	jump = jump < size - 1 ? jump : size - 1;

	/* Perform a linear search within the identified range */
	for (; m < jump && array[m] < value; m++)
		printf("Value checked array[%ld] = [%d]\n", m, array[m]);

	printf("Value checked array[%ld] = [%d]\n", m, array[m]);

	/* Check if the value is found and return the corresponding index */
	return (array[m] == value ? (int)m : -1);
}
