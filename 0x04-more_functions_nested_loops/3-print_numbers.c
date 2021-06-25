#include "holberton.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: does not return anything.
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		_putchar((i % 10) + '0');
	}
	return (i);
}
