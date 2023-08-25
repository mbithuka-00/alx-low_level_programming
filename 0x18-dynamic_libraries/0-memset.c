#include "main.h"

/**
 * _memset -fill memory with constant values
 * @s: pointer to char params
 * @b: constant byte
 * @n: byte of mem area
 * Return: *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
	s[m] = b;
	}
	return (s);
}
