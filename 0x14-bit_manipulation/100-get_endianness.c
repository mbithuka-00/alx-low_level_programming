#include "main.h"

/**
 * get_endianness - checks if a machine is little endian or big endian
 * Return: 0 if its big, 1 if its little
 * AUTHOR-MATT MBITHUKA
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c == 1 ? 1 : 0);
}

