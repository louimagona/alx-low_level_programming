#include "holberton.h"

/**
 * more_numbers - prints numbers above 10 as ch
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar((j / 10) + '0');
			}
			_putchar((j % 10) + '0');
			j++;
		}
		i++;
	}
	_putchar('\n');
}
