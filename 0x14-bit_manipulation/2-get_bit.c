#include "main.h"

/**
 * get_bit -it returns the value of a bit at an index in a decimal number
 * @n: number to search
 * @index: index postion of the bit
 *
 * Return:what value is the bit
 * AUTHOR:MATT MBITHUKA
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}


