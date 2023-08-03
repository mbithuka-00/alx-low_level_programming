#include "main.h"

/**
 * clear_bit - it sets the value of a given bit to 0
 * @n: pointer to the number to be  change
 * @index: index of the bit to be  clear
 *
 * Return: 1 if  success, -1 if failure
 * AUTHOR MATT MBITHUK
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

