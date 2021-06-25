#include "holberton.h"

/**
 * print_line - prints line on the terminal.
 * @n: parameter to be supplied.
 * Return: Always 0.
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar('_');
	}
	_putchar('\n');
}
