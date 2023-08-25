#include "main.h"
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int spce1 = 0, spce2 = 0;

	while (*(dest + spce1) != '\0')
	{
		spce1++;
	}

	while (spce2 < n)
	{
		*(dest + spce1) = *(src + spce2);
		if (*(src + spce2) == '\0')
			break;
		spce1++;
		spce2++;
	}
	return (dest);
}
