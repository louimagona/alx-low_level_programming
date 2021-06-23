#include "holberton.h"
/**
 * print_last_digit - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int print_last_digit(int i)
{
	if (i > 0)
	{
		_putchar(i % 10 + '0');
		return (i % 10);
	}
	else if (i == 0)
	{
		_putchar(i % 10 + '0');
		return (i % 10);
	}
	else
	{
		i = i*-1;

		_putchar(i % 10 + '0');
		return (i % 10);
	}
}
