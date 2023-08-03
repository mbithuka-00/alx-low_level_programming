#include "main.h"

/**
 * flip_bits - counts the number of bits to be change
 * to get from one num to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to be changed
 * AUTHOR:MATT MBITHUKA
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}


