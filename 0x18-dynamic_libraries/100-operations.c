#include <stdio.h>

/**
 * add - Adds two integers.
 * @m: The first integer.
 * @n: The second integer.
 *
 * Return: The sum of the two integers.
 */
int add(int m, int n)
{
	return (m + n);
}

/**
 * sub - Subtracts two integers.
 * @m: The first integer.
 * @n: The second integer.
 *
 * Return: The result of the subtraction.
 */
int sub(int m, int n)
{
	return (m - n);
}

/**
 * mul - Multiplies two integers.
 * @m: The first integer.
 * @n: The second integer.
 *
 * Return: The product of the two integers.
 */
int mul(int m, int n)
{
	return (m * n);
}

/**
 * div - Divides two integers.
 * @m: The dividend.
 * @n: The divisor.
 *
 * Return: The result of the division, or 0 if division by zero occurs.
 */
int div(int m, int n)
{
	if (n != 0)
	{
		return (m / n);
	}
	else
	{
		fprintf(stderr, "Error: Division by zero\n");
		return (0);
	}
}

/**
 * mod - Calculates the remainder of division of two integers.
 * @m: The dividend.
 * @n: The divisor.
 *
 * Return: The remainder of the division.
 */
int mod(int m, int n)
{
	if (n != 0)
	{
		return (m % n);
	}
	else
	{
		fprintf(stderr, "Error: Modulo by zero\n");
		return (0);
	}
}
