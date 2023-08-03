#include "main.h"

/**
 * print_binary - prints the binary equivalent of the decimal number
 * @n: number to print into binary
 * AUTHOR: MATT MBITHUKA
 */
void print_binary(unsigned long int n)
{
	int m;
	unsigned long int mask = 1UL << 63;

	for (m = 0; m < 64; m++)
	{
		if (n & mask)
			_putchar('1');
		else if (m > 0)
			_putchar('0');
		mask >>= 1;
	}
}

