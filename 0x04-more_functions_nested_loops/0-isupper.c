#include "holberton.h"

/**
 * _isupper - checks whether a character is uppercase.
 *
 * Return: Always 0.
 */

int _isupper(int c)
{
	char i;
	i = c + '0';

	if (i >= 'A' && i <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
