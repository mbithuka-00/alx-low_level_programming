#include "main.h"
/**
 * _puts - it  prints a string, followed by a new line,
 * @str: it points to the string to print
 * Return: void
*/


void _puts(char *str)
{
int index = 0;
while (str[index])
{
	_putchar(str[index]);
	index++;
}
_putchar('\n');
}
