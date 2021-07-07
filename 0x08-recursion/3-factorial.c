#include "holberton.h"

/**
 * factorial - computer factorial of a number.
 * @n: integer to obtain its factorial
 * Return: Always 0.
 */

int factorial(int n)
{
	if (n <= 0)
		return (-1);
	return (n * factorial(n - 1));
}
