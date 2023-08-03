#include "main.h"

/**
 * print_binary - it prints the binary equivalent of a decimal number
 * @n: number to be  printed in binary
 * AUTHOR:MATT MBITHUKA
 */
void print_binary(unsigned long int n)
{
	int m, count = 0;
	unsigned long int current;

	for (m = 63; m >= 0; m--)
	{
		current = m >> i;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}


