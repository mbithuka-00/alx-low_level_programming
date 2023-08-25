#include "main.h"

/**
  * _strchr -it locate the character in string
  * @s: source of string
  * @c: character to find
  *
  * Return: the string from character found
  * author: matt mbithuka
  */
char *_strchr(char *s, char c)
{
	int a = 0, b;

	while (s[a])
	{
		a++;
	}

	for (b = 0; b <= a; b++)
	{
		if (c == s[b])
		{
			s += b;
			return (s);
		}
	}

	return ('\0');
}
