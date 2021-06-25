#include "holberton.h"

/**
 * print_numbers - print numbers 0 to 9
 * Return: does not return anything.
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
