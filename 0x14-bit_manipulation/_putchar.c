#include "main.h"
#include <unistd.h>
/**
 * _putchar -it enable to  write the character c to stdout
 * @c: The character to be  printed
 *
 * Return: returns On success 1.
 * if an error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


