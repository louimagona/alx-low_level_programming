#include "holberton.h"

/**
 * print_square - prints a square on terminal.
 * @size: value to be supplied
 * Return: Always 0.
 */

void print_square(int size)
{
	char hash = '#';
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(hash);
		}
		if (size <= 0)
		{
			break;
		}
	}
	_putchar('\n');


}
