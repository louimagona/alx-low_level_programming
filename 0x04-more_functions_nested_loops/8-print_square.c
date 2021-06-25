#include "holberton.h"

/**
 * print_square - prints a square on terminal.
 * @size: value to be supplied
 * Return: Always 0.
 */

void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		i = 0;
		while(i < size)
		{
			j = 0;
			while (j < size)
			{
				_putchar('#');
				j++;
			}
			i++;
		}
	}
	else
	{
		_putchar('\n');
	}
}
