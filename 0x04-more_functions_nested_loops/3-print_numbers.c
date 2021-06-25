#include "holberton.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: does not return anything.
 */

void print_numbers(void)
{
	char c[10] = "0123456789";
	int i;

	for (i = 0; i < sizeof(c); i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
